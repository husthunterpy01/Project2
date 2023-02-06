/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : Gas detection
Version : 
Date    : 12/16/2022
Author  : 
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16.h>

#include <delay.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
// Alphanumeric LCD functions
#include <alcd.h>

// Declare your global variables here

void main(void)
{
	DDRD.0 =1;//chan d0 la ngo vao
	DDRD.4 =0;//chan d4 la ngo ra
	lcd_init(16);//khoi dong lcd
	lcd_clear();//xoa trnag man hinh lcd


	while (1)
	{
		if(PIND.0==1)
		{
			
			lcd_gotoxy(0,0);//cot 1 hang 1
			lcd_puts("CANH BAO!!!!");
			PORTD.4 =1;//bat led chan D4
		}
		else
		{
			lcd_gotoxy(0,0);
			lcd_puts("BINH THUONG ");
			PORTD.4 =0;//tat led chan D4
		}

	}
}