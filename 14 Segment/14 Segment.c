#include <REGX51.H>
int i,j,k,y,z;
void delay(y)
{
	for(i=0;i<=y;i++)
	{
		for(j=0;j<=1275;j++);
	}
}
int led[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
void main()
{
	while(1)
	{
		P1=P2=0x00;	
		for(z=0;z<=9;z++)
		{
			P2=led[z];
			for(k=0;k<=9;k++)
			{
				P1=led[k];
				delay(50);
			}
		}
	}	
}