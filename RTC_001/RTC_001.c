#include <REGX51.H>

sbit SCL=P2^5;
sbit SDA=P2^6;

void start();
void write(unsigned char);
void read();
void ack();
void delay(unsigned char);

void main()
{
	int sec;
	start();
	write(0xA3);// slave address in read mode//
	read();
	ack();
	sec = value;
}

void start()
{
	SDA=1; //processing the data//
	SCL=1; //clock is high//
	delay(100);
	SDA=0; //sent the data//
	delay(100);
	SCL=0; //clock signal is low//
}

void write(unsigned char d)
{
	unsigned char k,j=0×80;
	for(k=0;k<8;k++)
	{
		SDA=(d&j);
		J=j>>1;
		SCL=1;
		delay(4);
		SCL=0;
	}
	SDA=1;
	SCL=1;
	delay(2);
	c=SDA;
	delay(2);
	SCL=0;
}

void delay(int p)
{
	unsigned int a,b;
	For(a=0;a<255;a++); //delay function//
	For(b=0;b<p;b++);
}

void read ()
{
	Unsigned char j, z=0×00, q=0×80;
	SDA=1;
	for(j=0;j<8;j++)
	{
		SCL=1;
		delay(100);
		flag=SDA;
	if(flag==1)
		{
			z=(z|q);
			q=q>>1;
			delay (100);
			SCL=0;
		}
	}
}
void ack()
{
	SDA=0; //SDA line goes to low//
	SCL=1; //clock is high to low//
	delay(100);
	SCL=0;
}