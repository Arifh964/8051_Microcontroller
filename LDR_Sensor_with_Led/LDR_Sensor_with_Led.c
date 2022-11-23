#include <REGX51.H>
int i, j, k;
sbit LDR = P1^0;
sbit LED = P1^1;

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
		if(LDR==1)
		{
			LED=0;
		}
		else
		{
			LED=1;
		}
	}
}

