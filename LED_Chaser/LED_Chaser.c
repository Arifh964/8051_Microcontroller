#include <REGX51.H>
int i,j,y,z;

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
		int led[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
		for(z=0;z<=7;z++)
		{
			P1=led[z];
			delay(50);
		}
		for(z=7;z>=0;z--)
		{
			P1=led[z];
			delay(50);
		}
	}	
}
	
	 