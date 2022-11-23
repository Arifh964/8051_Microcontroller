#include <REGX51.H>
void delay (y)
{
	for (i=0;i=<=y;i++)
	{
		for (j=0;j<=1275;j++);
	}
}
Void main ()
{
	P1=0XFF;
	delay(25);
	P1=0X00;
	delay(25);
}