#include <REGX51.H>
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void delay()
{
	unsigned int i,j;
	for(i=0;i<=9;i++)
	for(j=0;j<1275;j++);
}
void display(unsigned char *v)
{
	while(*v)
	{
		P2=*v;
		rs=1;
		rw=0;
		en=1;
		delay();
		en=0;
		*v++;
	}
}
void command(unsigned char value)
{
	P2=value;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
}
void main()
{
	P2=0x00;
	command(0x38);
	delay();
	command(0x0E);
	delay();
	command(0x01);
	delay();
	command(0x80);
	delay();
	display("Arif");
	command(0xC0);
	display("Hassan");
}
	
