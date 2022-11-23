#include <REGX51.H>
sbit motorp=P2^0;
sbit motorn=P2^1;
sbit sw=P1^0;
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
	if((sw)==1)
	{
	P1=0X00;
	motorp=1;
	motorn=0;
	}
	else
	{
	motorp=0;
	motorn=0;
	}
 }
}