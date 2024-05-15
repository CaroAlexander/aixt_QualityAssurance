module irq

// global interrupts enable/disable
#define irq__enable()	INTCONbits.GIE = 1	
#define irq__disable()	INTCONbits.GIE = 0

// external interrupt
#define	irq__external_enable()	INTCONbits.GIE = 1; INTCONbits.INTE = 1
#define	irq__external_clear()	INTCONbits.INTF = 0
#define	irq__external_rising()	OPTION_REGbits.INTEDG = 1
#define	irq__external_falling()	OPTION_REGbits.INTEDG = 0

#define irq_external(FN_NAME)	void irq_external(void)

// timer 0 interrupt
#define irq_timer0(FN_NAME)		void irq_timer0(void)

fn C.isr()