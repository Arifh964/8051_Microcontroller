#include <REGX51.H>
int i,j,y;
sbit red = P1^0;
sbit yel = P1^1;
sbit ger = P1^2;
sbit red1 = P1^3;
sbit yel1 = P1^4;
sbit ger1 = P1^5;
sbit redi = P3^0; 
sbit yeli = P3^1;
sbit geri = P3^2;

sbit BUT=P2^0;
sbit but=P2^1;
sbit buti=P2^2;
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
	//P2=0x00;
	P3=0X00;
	while(1)
	{
		if(BUT==0)
		{
		red=1;
		delay(100);
		red=0;
		yel=1;
		delay(100);
		yel=0;
		ger=1;
		delay(100);
		ger=0;
		}
		if(but==0)
		{
		
		 red1=1;
		delay(100);
		red1=0;
		yel1=1;
		delay(100);
		yel1=0;
		ger1=1;
		delay(100);
		ger1=0;
		}
		if(buti==0)
		{
		redi=1;
		delay(100);
		redi=0;
		yeli=1;
		delay(100);
		yeli=0;
		geri=1;
		delay(100);
		geri=0;
		}
	}
	}
