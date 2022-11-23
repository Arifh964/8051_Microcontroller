#include <REGX51.H>
sbit R1=P1^0;
sbit R2=P1^1;
sbit R3=P1^2;
sbit R4=P1^3;

sbit C1=P1^4;
sbit C2=P1^5;
sbit C3=P1^6;

sbit RS=P2^0;
sbit RW=P2^1;
sbit EN=P2^2;

sfr LCD=0xA0;
void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void delay1();
void lcdcmd(unsigned char val)
{
	P3=val;
	RS=0;
	RW=0;
	EN=1;
	delay();
	EN=0;
}
void lcddat(unsigned char val)
{
	P3=val;
	RS=1;
	RW=0;
	EN=1;
	delay();
	EN=0;
}
 void delay()
 {
	 unsigned int i;
	 for(i=0;i<1200;i++);
 }
 void delay1()
 {
	 unsigned int j,k;
	 for(j=0;j<200;j++)
	 for(k=0;k<200;k++);
 }
 void main()
 {
	 P2=0X00;
	 lcdcmd(0X38);
	 delay();
	 lcdcmd(0X01);
	 delay();
	 lcdcmd(0X10);
	 delay();
	 lcdcmd(0X0C);
	 delay();
	 lcdcmd(0X81);
	 delay();
	 while(1)
	 {
		 R1=0;
		 
		 if(C1==0)
		 {
			 lcddat('1');
			 delay();
			 delay1();
		 }
		 if(C2==0)
		 {
			 lcddat('2');
			 delay();
			 delay1();
		 }
		 if(C3==0)
		 {
			 lcddat('6');
			 delay();
			 delay1();
		 }
		 R2=1;
		 R3=0;
		 if(C1==0)
		 {
			 lcddat('7');
			 delay();
			 delay1();
		 }
		 if(C2==0)
		 {
			 lcddat('8');
			 delay();
			 delay1();
		 }
		 if(C3==0)
		 {
			 lcddat('9');
			 delay();
			 delay1();
		 }
		 R3=1;
		 R4=0;
		 if(C1==0)
		 {
			 lcddat('*');
			 delay();
			 delay1();
		 }
		 if(C2==0)
		 {
			 lcddat('0');
			 delay();
			 delay1();
		 }
		 if(C3==0)
		 {
			 lcddat('#');
			 delay();
			 delay1();
		 }
		 R4=1;
	 }
 }
			 
		 
			 

