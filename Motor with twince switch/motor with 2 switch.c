#include <REGX51.H>
sbit motorp=P2^0;
sbit motorn=P2^1;
sbit sw=P1^0;
sbit sw1=P1^1;

  void main()
{
	P1=P2=0x00;
	while(1)
	{
	if((sw)==1)
	{
	motorp=1;
	motorn=0;
	}
	else if((sw1)==1)
	{
	motorp=0;
	motorn=1;
	}
	else
	{
		motorp=0;
		motorn=0;
	}
 }
}