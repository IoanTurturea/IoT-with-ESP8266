/* definitions / defines file */
#define DEFS_H

#define SW_VERSION		13   /* i.e. major.minor software version nbr. */

#ifndef NULL
#define NULL  0
#endif
        
// logix ...
#define TRUE	1
#define FALSE	0 
#define DUMMY	0

#define wdogtrig()			#asm("wdr") // call often if Watchdog timer enabled

#define CR				0x0D
#define LF				0x0A  

#define LED1 PORTD.6        // PORTx is used for output
#define SW1 PIND.5          // PINx is used for input
#define TESTP PORTD.4       // test bit durations
#define B1 PINA.0        
#define B2 PINA.1         
#define B3 PINA.2         
#define B4 PINA.3          
#include "funct.h"

