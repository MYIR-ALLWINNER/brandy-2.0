/*
 * (C) Copyright 2013-2016
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 */

#ifndef _UART_H_
#define _UART_H_

#define CCM_UART_RST_OFFSET       (16)
#define CCM_UART_GATING_OFFSET    (0)
#define CCM_UART_ADDR_OFFSET      (0x400)

typedef struct serial_hw
{
	volatile unsigned int rbr;		/* 0 */
	volatile unsigned int ier;		/* 1 */
	volatile unsigned int fcr;		/* 2 */
	volatile unsigned int lcr;		/* 3 */
	volatile unsigned int mcr;		/* 4 */
	volatile unsigned int lsr;		/* 5 */
	volatile unsigned int msr;		/* 6 */
	volatile unsigned int sch;		/* 7 */
}serial_hw_t;

#define thr rbr
#define dll rbr
#define dlh ier
#define iir fcr


/* Baud rate for UART,Compute the divisor factor */
#define   UART_BAUD    115200

/* UART Line Control Parameter */
/* Parity: 0,2 - no parity; 1 - odd parity; 3 - even parity */
#define   PARITY       0 
/* Number of Stop Bit: 0 - 1bit; 1 - 2(or 1.5)bits */
#define   STOP         0
/* Data Length: 0 - 5bits; 1 - 6bits; 2 - 7bits; 3 - 8bit */
#define   DLEN         3 


void sunxi_serial_init(int uart_port, void *gpio_cfg, int gpio_max);
void sunxi_serial_putc (char c);
char sunxi_serial_getc (void);
int sunxi_serial_tstc (void);


#endif    /*  #ifndef _UART_H_  */
