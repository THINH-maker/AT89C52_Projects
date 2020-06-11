#include <REGX52.H>
sbit PWM_Pin = P2^0;
int i,j;
unsigned int T, T_ON;
void delay_ms(unsigned int t)
{
	for(i=0;i<=t;i++)
  { for( j=0;j<123;j++);
	}
}

void main()
{ //cho Led sang , tat dan
	T= 1000;
	T_ON=0;
	for(j=0;j<1000;j+=100)
	{
		T_ON=j;
		PWM_Pin=1;
		delay_ms(T_ON);
		PWM_Pin=0;
		delay_ms(T-T_ON);
	}
	while(1){}
		
	
	//dieu che PWM
	/*while(1)  
	{
	 PWM_Pin=1;
	delay_ms(200);
	 PWM_Pin=~PWM_Pin;
	delay_ms(800);   // duty cycle=0,2
	}*/
}
	





