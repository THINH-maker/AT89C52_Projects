#include <regx52.h>
#include "LIB_lcd_8051.h"
#include "Port_lcd_4bit.h"
#include <stdio.h>
char str[20];
void Dem_Products(int t)
{
	while(1){
	t=0;
	do{
	LCD_Init();
	LCD_Print("Vu Cuong Thinh99");
	LCD_SetCursor(1,0);
	sprintf(str,"so sp: %d",t);
	LCD_Print(str);
  while(P3_2);
	while(!P3_2);
  t++;
	//delay_ms(300);
	LCD_Clear();
	}while(t<7);
	while(t>=7)
		{LCD_Print("Vu Cuong Thinh99");
	LCD_SetCursor(1,0);
	LCD_Print("Warning Overflow");
	}
}
	}
void main(){
	unsigned int t;
	Dem_Products(t);
	while(1){}
	
}
	
	

