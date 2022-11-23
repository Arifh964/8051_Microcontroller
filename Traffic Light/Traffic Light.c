#include <REGX51.H>
int i,j,y,k;
void delay(k)
{
	for (i=0;i<=k;i++)
	{
		for (j=0;j<=1275;j++);
	}
}
void main()
{
		while(1)
		{
			P1=0x01;
			delay(200);
			P1=0x02;
			delay(200);		
			P1=0x04;
			delay(200);
			
		}
}
