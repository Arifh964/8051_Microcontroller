#include <REGX51.H>
sbit motorp=P2^0;
sbit motorn=P2^1;
sbit motorp1=P2^2;
sbit motorn2=P2^3;
sbit sw=P1^0;
sbit sw1=P1^1;

void frwd()
{
	motorp=1;
	motorn=0;
	motorp1=1;
	motorn2=0;
}
void bkwrd()
{
	motorp=0;
	motorn=1;
	motorp1=0;
	motorn2=1;
}
void stop()
{
	motorp=0;
	motorn=0;
	motorp1=0;
	motorn2=0;
}
void altr()
{
	motorp=1;
	motorn=0;
	motorp1=0;
	motorn2=1;
}
void main()
{
	P1=P2=0x00;
	while(1)
	{
	if((sw)==1&&(sw1)==0)
	{
	  frwd();
	}
	else if((sw1)==1&&(sw)==0)
	{
	bkwrd();
	}
	else if((sw)==1&&(sw1)==1)
	{
		altr();
	}
	else
	{
		stop();
	}
 }
}