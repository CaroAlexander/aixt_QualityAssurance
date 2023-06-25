// Project Name: Aixt project, https://gitlab.com/fermarsan/aixt-project.git
// File Name: cgen.v
// Author: Fernando Martínez Santa
// Date: 2023
// License: MIT
//
// Description: This file contains the C code generation fucntions of the Aixt project.

module aixt_cgen

import v.ast
import v.token
import v.pref
import v.parser
import v.checker
import v.ast.walker
import toml

pub struct Gen {
mut:
	file  &ast.File  = unsafe { nil }
	table &ast.Table = unsafe { nil }
	out   string
pub mut:
	pref  &pref.Preferences = unsafe { nil }
	setup toml.Doc //= unsafe { nil }
}

pub fn (mut gen Gen) gen(source_path string) string {
	// gen.pref.is_script = true
	gen.file = parser.parse_file(source_path, gen.table, .skip_comments, gen.pref)
	mut checker_ := checker.new_checker(gen.table, gen.pref)
	checker_.check(gen.file)
	walker.inspect(gen.file, unsafe { nil }, unsafe { gen.visit_gen })
	return gen.out
}

fn (mut gen Gen) visit_gen(node &ast.Node, data voidptr) bool {
	// println(node.type_name())
	match node {
		ast.Expr {
		println(node.type_name())
			match node {
				ast.IfExpr { // basic shape of an "if" expression
					mut out := 'if(__cond__){\n__stmt__\n}\n'
					out += if node.has_else { 'else{\n__stmt__\n}\n' } else { '' }
					gen.out = gen.out.replace_once('__stmt__\n', out)
				}
				ast.InfixExpr {
					gen.out = gen.out.replace_once('__v.ast.InfixExpr__', 
												   '__${node.left.type_name()}__ ${node.op} __${node.right.type_name()}__')
				}
				ast.PostfixExpr {
					gen.out = gen.out.replace_once('__v.ast.PostfixExpr__', '${node.expr}${node.op};')
				}
				ast.Ident {
					gen.out = gen.out.replace_once('__v.ast.Ident__', node.name)
				}
				ast.StringLiteral {
					gen.out = gen.out.replace_once('__v.ast.StringLiteral__', '"${node.val}"')
				}
				ast.CharLiteral {
					gen.out = gen.out.replace_once('__v.ast.CharLiteral__', "'${node.val}'")
				}
				ast.FloatLiteral {
					gen.out = gen.out.replace_once('__v.ast.FloatLiteral__', node.val)
				}
				ast.IntegerLiteral {
					out := if node.str().contains('0o') {	// if it is an octal literal
						node.val.int().str() 				// turn it into decimal
					} else {
						node.val
					}
					gen.out = gen.out.replace_once('__v.ast.IntegerLiteral__', out)
				}
				ast.BoolLiteral {
					gen.out = gen.out.replace_once('__v.ast.BoolLiteral__', node.val.str())
				}
				else {}
			}
		}
		ast.Stmt {
			print('${node.type_name()} - ')
			match node {
				ast.FnDecl {
					if node.is_main {
						attrs := ''
						ret_type := if node.return_type == ast.void_type_idx {
							'void'
						} else {
							'int'
						}
						params := if node.params == [] { 'void' } else { 'int' }
						gen.out += '${attrs} ${ret_type} main(${params}) {\n${'__stmt__\n'.repeat(node.stmts.len)}}'
						gen.out = if gen.out[0] == ` ` { gen.out[1..] } else { gen.out }
					} else {
						// attrs	 := ''
						// ret_type := if node.return_type == ast.void_type_idx { 'void' } else { 'int' }
						// params 	 := if node.params == [] { 'void' } else { 'int' }
						// gen.out += '${attrs} ${ret_type} main(${params}) {\n${gen.temp_block_stmts(node.stmts.len)}}'
						// gen.out = if gen.out[0] == ` ` { gen.out[1..] } else { gen.out }
					}
				}
				ast.AssignStmt {
					mut assign := ''
					for i in 0 .. node.left.len {
						// println(node.right[i])
						right := if node.right[i].type_name() == 'v.ast.Ident' {
							(node.right[i] as ast.Ident).name
						} else {
							'__${node.right[i].type_name()}__'
						}
						if node.op == token.Kind.decl_assign { // in case of declaration
							println(ast.new_table().type_symbols[node.right_types[i]].str())
							var_type := gen.setup.value(ast.new_table().type_symbols[node.right_types[i]].str())
							assign += if var_type.string() == 'char []' {
								'char ${node.left[i]}[] = ${right};\n'
							} else {
								'${var_type.string()} ${node.left[i]} = ${right};\n'
							}
						} else { // for the rest of assignments
							assign += '${node.left[i]} ${node.op} ${right};\n'
						}
					}
					gen.out = gen.out.replace_once('__stmt__\n', assign)
				}
				ast.ExprStmt {
					gen.out = gen.out.replace_once('__stmt__\n', '__${node.expr.type_name()}__\n')
				}
				else {}
			}
		}
		ast.IfBranch { // statements block of "if" and "else" expressions
			gen.out = gen.out.replace_once('__cond__', '${node.cond}')
			gen.out = gen.out.replace_once('__stmt__\n', '${'__stmt__\n'.repeat(node.stmts.len)}')
		}
		else {}
	}
	// println(gen.out + '\n' + '_'.repeat(60))	
	return true
}
