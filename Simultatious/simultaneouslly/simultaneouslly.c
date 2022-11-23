#include <REGX51.H>
int i,j,y,k;
void delay(y)
{
	for(i=0;i<=y;i++)
	{
			for(j=0;j<=1275;j++);
	}
}
void main()
{
  P1=0xFF;
  delay(25);
  P1=0x00;
  delay(25);
	
	}
