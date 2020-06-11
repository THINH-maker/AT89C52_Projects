#include <regx52.h>
#include "LIB_lcd_8051.h"
#include "Port_lcd_4bit.h"
#include <math.h>
#include <stdio.h>
float m;
int t;
char str[16];
void Dem_xung()
{
	TH0=0;
	TL0=0;
	TMOD&=0xF0;
	TMOD|=0x09;
	while(P3_2);
	while(!P3_2);
	TR0=1;
	while(P3_2);
	TR0=0;
	t=TH0;
	t<<=8;
	t|=TL0;
	m=(float)t*pow(10,-6)*2;    //neu de tan so <15Hz, xay ra loi ??? theo tinh toan phair nhor hon 7HZ moi xra loi :)
}
void main()
{
	LCD_Init();
	LCD_SetCursor(0,0);
	Dem_xung();
	sprintf(str,"Tan so: %.6f",1/m);
	LCD_Print(str);
	while(1){}
	}
	