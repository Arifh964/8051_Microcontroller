#include <REGX51.H>
int i,j,k,l,y,z;
sbit red=P1^0;
sbit yel=P1^1;
sbit ger=P1^2;

void delay(y)
{
	for(i=0;i<=y;i++)
	{
		for(j=0;j<=1275;j++);
	}
}

void seg()
{
	int led[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
	{
		P2=P3=0x00;	
		for(z=0;z<=6;z++)
		{
			P3=led[z];
			delay(25);
			for(k=0;k<=9;k++)
			{
				P2=led[k];
				delay(50);
			}
		}
	}	
	}

	void segi()
{
	int led[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
	{
		P2=P3=0x00;	
		for(z=0;z<=3;z++)
		{
			P3=led[z];
			delay(25);
			for(k=0;k<=9;k++)
			{
				P2=led[k];
				delay(50);
			}
		}
	}	
	}

	void segii()
{
	int led[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
	{
		P2=P3=0x00;	
		for(z=0;z<=2;z++)
		{
			P3=led[z];
			delay(25);
			for(k=0;k<=9;k++)
			{
				P2=led[k];
				delay(50);
			}
		}
	}	
	}

void main()
{
	P1=0X00;
	while(1)
	{
		red=1;
		seg();
		red=0;
		
		yel=1;
		segi();
		yel=0;
		
		ger=1;
		segii();
		ger=0;
		
		yel=1;
		seg();
		yel=0;
	}
}