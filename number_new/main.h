#ifndef MAIN_H_
#define MAIN_H_
#include <avr/io.h>
#define  F_CPU 16000000
#include "util/delay.h"
#define dark PORTB&=~(1<<4),PORTB&=~(1<<3),PORTB&=~(1<<2),PORTB&=~(1<<1),PORTB&=~(1<<0),PORTD&=~(1<<7),PORTD&=~(1<<6),PORTD&=~(1<<5),PORTD&=~(1<<4)
#define zero PORTB|=(1<<4),PORTB|=(1<<3),PORTB|=(1<<2),PORTB|=(1<<1),PORTB|=(1<<0),PORTD|=(1<<7),PORTD|=(1<<5),PORTD|=(1<<4)
#define one  PORTB|=(1<<3),PORTB|=(1<<2),PORTD|=(1<<5),PORTD|=(1<<4)
#define two  PORTB|=(1<<4),PORTB|=(1<<3),PORTD|=(1<<6),PORTB|=(1<<0),PORTB|=(1<<1),PORTD|=(1<<5),PORTD|=(1<<4)
#define three  PORTB|=(1<<4),PORTB|=(1<<3),PORTB|=(1<<2),PORTB|=(1<<1),PORTD|=(1<<6),PORTD|=(1<<5),PORTD|=(1<<4)
#define four  PORTB|=(1<<3),PORTB|=(1<<2),PORTD|=(1<<7),PORTD|=(1<<6),PORTD|=(1<<5),PORTD|=(1<<4)
#define five  PORTB|=(1<<4),PORTD|=(1<<7),PORTD|=(1<<6),PORTB|=(1<<2),PORTB|=(1<<1),PORTD|=(1<<5),PORTD|=(1<<4)
#define six   PORTB|=(1<<4),PORTB|=(1<<2),PORTB|=(1<<1),PORTB|=(1<<0),PORTD|=(1<<7),PORTD|=(1<<6),PORTD|=(1<<5),PORTD|=(1<<4)
#define  seven PORTB|=(1<<4),PORTB|=(1<<3),PORTB|=(1<<2),PORTD|=(1<<5),PORTD|=(1<<4)
#define  eigth PORTB|=(1<<4),PORTB|=(1<<3),PORTB|=(1<<2),PORTB|=(1<<1),PORTB|=(1<<0),PORTD|=(1<<7),PORTD|=(1<<6),PORTD|=(1<<5),PORTD|=(1<<4)
#define  nine PORTB|=(1<<4),PORTB|=(1<<3),PORTB|=(1<<2),PORTD|=(1<<7),PORTD|=(1<<6),PORTD|=(1<<5),PORTD|=(1<<4)
#define  ten zero,PORTD|=(1<<5)



#endif /* MAIN_H_ */