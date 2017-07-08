#ifdef ENABLE_BIT_DEFINITIONS
 
/* Bit definitions for use with the IAR Assembler   
   The Register Bit names are represented by their bit number (0-7). */     

/* SP */
#define SP7     7
#define SP6     6
#define SP5     5
#define SP4     4
#define SP3     3
#define SP2     2
#define SP1     1
#define SP0     0

/* GIMSK */
#define INT1    7
#define INT0    6
#define PCIE    5

/* EIFR */
#define INTF1   7
#define INTF0   6
#define PCIF    5

/* TIMSK */
#define TOIE1   7
#define OCIE1A  6
#define OCIE1B  5
#define ICIE1   3
#define OCIE0B  2
#define TOIE0   1
#define OCIE0A  0

/* TIFR */
#define TOV1    7
#define OCF1A   6
#define OCF1B   5
#define ICF1    3
#define OCF0B   2
#define TOV0    1
#define OCF0A   0

/* SPMCSR */
#define CTPB    4
#define RFLB    3
#define PGWRT   2
#define PGERS   1
#define SPMEN   0

/* MCUCR */
#define PUD     7
#define SM1     6
#define SE      5
#define SM0     4
#define ISC11   3       
#define ISC10   2
#define ISC01   1
#define ISC00   0

/* MCUSR */
#define WDRF    3
#define BORF    2
#define EXTRF   1
#define PORF    0

/* TCCR0B */
#define FOC0A   7
#define FOC0B   6
#define WGM02   3
#define CS02    2
#define CS01    1
#define CS00    0

/* OSCCAL */
#define CAL6    6
#define CAL5    5
#define CAL4    4
#define CAL3    3
#define CAL2    2
#define CAL1    1
#define CAL0    0

/* TCCR0A */
#define COM0A1  7
#define COM0A0  6
#define COM0B1  5
#define COM0B0  4
#define WGM01   1
#define WGM00   0

/* TCCR1A */
#define COM1A1  7
#define COM1A0  6
#define COM1B1  5
#define COM1B0  4
#define WGM11   1
#define WGM10   0

/* TCCR1B */
#define ICNC1   7
#define ICES1   6
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

/* CLKPR */
#define CLKPCE  7
#define CLKPS3  3
#define CLKPS2  2
#define CLKPS1  1
#define CLKPS0  0

/* SFIOR/GTCCR */
#define PSR10   0

/* TCCR1C */
#define FOC1A   7
#define FOC1B   6

/* WDTCR */
#define WDIF    7
#define WDIE    6
#define WDP3    5
#define WDCE    4
#define WDE     3
#define WDP2    2
#define WDP1    1
#define WDP0    0

/* PCMSK */
#define PCINT7  7
#define PCINT6  6
#define PCINT5  5
#define PCINT4  4
#define PCINT3  3
#define PCINT2  2
#define PCINT1  1
#define PCINT0  0

/* EECR */
#define EEPM1   5
#define EEPM0   4
#define EERIE   3
#define EEMPE   2
#define EEPE    1
#define EERE    0

/* PORTA */
#define PORTA2  2
#define PORTA1  1
#define PORTA0  0

/* PORTA */
#define PA2  2
#define PA1  1
#define PA0  0

/* DDRA */
#define DDA2    2
#define DDA1    1
#define DDA0    0

/* PINA */
#define PINA2   2
#define PINA1   1
#define PINA0   0

/* PORTB */
#define PORTB7  7
#define PORTB6  6
#define PORTB5  5
#define PORTB4  4
#define PORTB3  3
#define PORTB2  2
#define PORTB1  1
#define PORTB0  0

/* PORTB */
#define PB7     7
#define PB6     6
#define PB5     5
#define PB4     4
#define PB3     3
#define PB2     2
#define PB1     1
#define PB0     0

/* DDRB */
#define DDB7    7
#define DDB6    6
#define DDB5    5
#define DDB4    4
#define DDB3    3
#define DDB2    2
#define DDB1    1
#define DDB0    0

/* PINB */
#define PINB7   7
#define PINB6   6
#define PINB5   5
#define PINB4   4
#define PINB3   3
#define PINB2   2
#define PINB1   1
#define PINB0   0

/* PORTD */
#define PORTD6  6
#define PORTD5  5
#define PORTD4  4
#define PORTD3  3
#define PORTD2  2
#define PORTD1  1
#define PORTD0  0

/* PORTD */
#define PD6  6
#define PD5  5
#define PD4  4
#define PD3  3
#define PD2  2
#define PD1  1
#define PD0  0

/* DDRD */
#define DDD6    6
#define DDD5    5
#define DDD4    4
#define DDD3    3
#define DDD2    2
#define DDD1    1
#define DDD0    0

/* PIND */
#define PIND6   6
#define PIND5   5
#define PIND4   4
#define PIND3   3
#define PIND2   2
#define PIND1   1
#define PIND0   0

/* USISR */
#define USISIF  7
#define USIOIF  6
#define USIPF   5
#define USIDC   4
#define USICNT3 3
#define USICNT2 2
#define USICNT1 1
#define USICNT0 0

/* USICR */
#define USISIE  7
#define USIOIE  6
#define USIWM1  5
#define USIWM0  4
#define USICS1  3
#define USICS0  2
#define USICLK  1
#define USITC   0

/* UCSRA */
#define RXC     7
#define TXC     6
#define UDRE    5
#define FE      4
#define DOR     3
#define UPE     2
#define U2X     1
#define MPCM    0

/* UCSRB */
#define RXCIE   7
#define TXCIE   6
#define UDRIE   5
#define RXEN    4
#define TXEN    3
#define UCSZ2   2
#define RXB8    1
#define TXB8    0

/* ACSR */
#define ACD     7
#define ACBG    6
#define ACO     5
#define ACI     4
#define ACIE    3
#define ACIC    2
#define ACIS1   1
#define ACIS0   0

/* UCSRC */
#define UMSEL   6
#define UPM1    5
#define UPM0    4
#define USBS    3
#define UCSZ1   2
#define UCSZ0   1
#define UCPOL   0

/* DIDR */
#define AIN1D	1
#define AIN0D	0


/* Extended Fuse Byte */
#define SELFPRGEN 0

/* High Fuse Byte */
#define DWEN      7
#define EESAVE    6
#define SPIEN     5
#define WDTON     4
#define BODLEVEL2 3
#define BODLEVEL1 2
#define BODLEVEL0 1
#define RSTDISBL  0

/* Low Fuse Byte */
#define CKDIV8    7
#define CKOUT     6
#define SUT1      5
#define SUT0      4
#define CKSEL3    3
#define CKSEL2    2
#define CKSEL1    1
#define CKSEL0    0
       
/* Pointer definition   */ 
#define    XL     R26
#define    XH     R27
#define    YL     R28
#define    YH     R29
#define    ZL     R30
#define    ZH     R31
       
/* Constants */ 
#define    RAMEND    0xDF    /* Last On-Chip SRAM Location */
#define    XRAMEND   0xDF
#define    E2END     0x7F
#define    FLASHEND  0x07FF

#endif /* ENABLE_BIT_DEFINITIONS */
