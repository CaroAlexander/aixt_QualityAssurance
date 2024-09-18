// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa
// Date: 2024
// License: MIT
// Description: setup files loading for the device and the compiler
module aixt_setup

import toml


// load function loads the setup files for the device and the compiler
pub fn (mut stp Setup) load(device string, aixt_path string) {
	eq_devices := toml.parse_file('${aixt_path}/setup/equivalent-devices.toml') or { panic(err) }

	stp.device = device
	stp.port = if device in eq_devices.value('devices').as_map() {
		(eq_devices.value('devices').as_map()[device] or {''}).string()
	} else {
		device
	}
	
	platform := toml.parse_file('${aixt_path}/setup/${stp.port}.toml') or { panic(err) }
	
	stp.board 				= platform.value('board').string()
	stp.backend 			= platform.value('backend').string()
	stp.cc_linux 			= platform.value('cc_linux').string()
	stp.cc_windows 			= platform.value('cc_windows').string()
	stp.cc_make_flags		= platform.value('cc_make_flags').string()	
	stp.api_paths			= platform.value('api_paths').array().as_strings()		
	stp.v_defines			= platform.value('v_defines').array().as_strings()	
	stp.inline_as_c_macro	= platform.value('inline_as_c_macro').bool()
	stp.string_default_len	= platform.value('string_default_len').int()
	
	compiler_setup_path := platform.value('compiler_setup_path').string()
	compiler := toml.parse_file('${aixt_path}/${compiler_setup_path}') or { panic(err) }

	stp.main_ret_type		= compiler.value('main_ret_type').string() 
	stp.main_params  		= compiler.value('main_params').string() 
	stp.compiler_types		= compiler.value('compiler_types').as_map().as_strings()

	println('setup files:\n\t${aixt_path}/setup/${stp.port}.toml')
	println('\t${aixt_path}/${compiler_setup_path}')
}