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
		
		P1=0x01;
		delay(25);	
    P1=0x00;
		delay(25);		
	
	}	
}
	
	 