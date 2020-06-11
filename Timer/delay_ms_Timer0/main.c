#include<REGX52.H>
#define FRE_OSC 11059200
void delay_ms_Timer0(unsigned int t)
{
	do{
	TH0=0xFC;
	TL0=0x66;
	TMOD&=0xF0;
	TMOD|=0xF1;
	TR0=1;
	while(!TF0);
	TF0=0;
	t--;
	}while(t>0);
}
void main()
{
	while(1)
	{
		P2_0=~P2_0;
		delay_ms_Timer0(500);
	}
}