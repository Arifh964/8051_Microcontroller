#include <REGX51.H>
sbit motorp=P1^0;
sbit motorn=P1^1;
int i,j;
void delay (y)
{
	for (i=0;i<=y;i++)
	{
		for (j=0;j<=1275;j++);
	}
}
  void main()
{
	while(1)
	{
	P1=0X00;
	motorp=1;
	motorn=0;
	delay(100);
	
	motorp=0;
	motorn=1;
	delay(100);
	}
		
}