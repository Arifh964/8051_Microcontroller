#include <REGX51.H>
int i,j,y;

void delay(y)
{
	for(i=0;i<=y;i++)
	{
		for(j=0;j<=1275;j++);
	}
}

void main()
{
	while(1)
	{
		P1=0x00;
		delay(25);
		P1=0x01;
		delay(25);		
		P1=0x02;
		delay(25);
		P1=0x04;
		delay(25);
		P1=0x08;
		delay(25);
		P1=0x10;
		delay(25);
		P1=0x20;
		delay(25);
		P1=0x40;
		delay(25);
		P1=0x80;
		delay(25);
	}	
}
	
	 