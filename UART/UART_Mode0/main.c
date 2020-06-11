#include <REGX52.H>
int i,j;
void Uart_Connect(unsigned char c)
	{
		SBUF= c;
		while(TI==0);
		TI=0;
		P3_2=0;
		P3_2=1;
	}
void delay_ms(int t){
	for( i=0;i<=t;i++)
	for(j=0;j<123;j++);
}
void main(){
	   SM0=SM1=0;
	   while(1){
	   Uart_Connect(0x55);
	   delay_ms(30000);
		 Uart_Connect(0xAA);
		 delay_ms(300);}
}
	
	 