#include <REGX51.H>
int i,j,y;
sbit led = P1^0;
sbit sw = P1^1;

void delay(y)
{
	for(i=0;i<=y;i++)
	{
		for(j=0;j<=1275;j++);
	}
}

void main()
{
	P1=0x00;
	while(1)
	{
		if(sw==1)
		{
			led=1;
		}
		else
		{
			led=0;
		}
	}
}