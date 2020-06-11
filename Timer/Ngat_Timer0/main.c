#include <regx52.h>
int count=10;
int i,j,t;
void delay_ms(unsigned int t){
	for(i=0;i<=t;i++)
{
	for(j=0;j<123;j++);}
}
void main()
{
	TH0=0x3C;
	TL0=0xB0;
	TMOD&=0xF0;
	TMOD |= 0x01;
	
	ET0=1; // cho phep ngat Timer 0
	EA=1;  // cho phép ngat toàn cuc
	TR0=1; // bat Timer 0
	
	while(1)
		{
			P1=0x00;
			delay_ms(100);
			for(i=0;i<8;i++)
			{ P1 <<= 1;
				P1 |= 0x01;
				delay_ms(100);
			}
    }
}
void Interrupt0(void) interrupt 1
{
	TH0=0x3C;
  TL0=0xB0;
	count--;
	if(count==0)
		{
			count =10;
			P2=~P2;
		}
		}
  