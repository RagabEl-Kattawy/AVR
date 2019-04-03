ATMega 32A
SREG: Status Register
MCUCR: MCU Control Register
MCUCSR: MCU Control and Status Register
GICR: General Interrupt Control Register
GIFR: General Interrupt Flag Register

Global Interrupt:
bit number in SREG
INT0~INT2:
bit number in the GICR
ISC00~ISC11:
Interrupt 0&1 Sense Control bits in MCUCR
ISC2:
interrupt 2 Sense Control bit in MCUCSR

ALL OTHER DEFINITIONS ARE FOR READABLILTY

*DRIVER FUNCTIONS*
DEI_mcrIntialize;
Enables the Global Interrupt in SREG

DEI_vidINT0Enable();
Enables Digital External Interrupt 0

DEI_vidINT1Enable();
Enables Digital External Interrupt 1

DEI_vidINT2Enable();
Enables Digital External Interrupt 2

DEI_INT0ISR:
A void-void Function that contain the ISR for INT0
must be preceded by DEI_INT0ISR__;

DEI_INT1ISR:
A void-void Function that contain the ISR for INT1
must be preceded by DEI_INT1ISR__;

DEI_INT2ISR:
A void-void Function that contain the ISR for INT2
must be preceded by DEI_INT2ISR__;
