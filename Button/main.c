#include <REGX52.H>
sbit Led_Pin=P2^4;
sbit Pin_In  =P1^4;
void main(){
	//int Led_Pin =0; // neu dat them kieu int vào truoc se hieu la 1 bien, kp chan
	Led_Pin=0;
	if(Pin_In==1)
		{
			Led_Pin = 1;
			}
		else
			Led_Pin =0;
	
}