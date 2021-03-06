/*
 * io_exp.h
 *
 *  Created on: Feb 25, 2017
 *      Author: user
 */

#ifndef IO_EXP_H_
#define IO_EXP_H_

#define IOEXP_ADDRESS 0x40

#define IOCON_BANK   0x80
#define IOCON_MIRROR 0x40
#define IOCON_SEQOP  0x20
#define IOCON_DISSLW 0x10
#define IOCON_HAEN   0x08
#define IOCON_ODR    0x04
#define IOCON_INTPOL 0x02

// Defines for IOCON.BANK = 0
#define IODIRA      0x00
#define IODIRB      0x01
#define IPOLA       0x02
#define IPOLB       0x03
#define GPINTENA    0x04
#define GPINTENB    0x05
#define DEFVALA     0x06
#define DEFVALB     0x07
#define INTCONA     0x08
#define INTCONB     0x09
#define IOCONA      0x0A
#define IOCONB      0x0B
#define GPPUA       0x0C
#define GPPUB       0x0D
#define INTFA       0x0E
#define INTFB       0x0F
#define INTCAPA     0x10
#define INTCAPB     0x11
#define IOEXP_GPIOA 0x12
#define IOEXP_GPIOB 0x13
#define OLATA       0x14
#define OLATB       0x15

#define GPA0 0x0001
#define GPA1 0x0002
#define GPA2 0x0004
#define GPA3 0x0008
#define GPA4 0x0010
#define GPA5 0x0020
#define GPA6 0x0040
#define GPA7 0x0080
#define GPB0 0x0100
#define GPB1 0x0200
#define GPB2 0x0400
#define GPB3 0x0800
#define GPB4 0x1000
#define GPB5 0x2000
#define GPB6 0x4000
#define GPB7 0x8000

#endif /* IO_EXP_H_ */
