#include <REGX51.H>

sbit R1=P1^0;
sbit R2=P1^1;
sbit R3=P1^2;
sbit R4=P1^3;
sbit C1=P1^4;
sbit C2=P1^5;
sbit C3=P1^6;

int i,j;
int led[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
void delay()
 {
	 for(i=0;i<=15;i++)
	 {
		 for(j=0;j<=1250;j++);
	 }
 }

 void main()
 {
	 P2=0x00;
	 while(1)
	 {
		 R1=0;
		 if(C1==0)
		 {
			 P2=led[1];
			 delay();
		 }
		 if(C2==0)
		 {
			 P2=led[2];
			 delay();
		 }
		 if(C3==0)
		 {
			 P2=led[3];
			 delay();
		 }
		 R1=1;	R2=0;
		 if(C1==0)
		 {
			 P2=led[4];
			 delay();
		 }
		 if(C2==0)
		 {
			 P2=led[5];
			 delay();
		 }
		 if(C3==0)
		 {
			 P2=led[6];
			 delay();
		 }
		 R2=1;R3=0;
		 if(C1==0)
		 {
			 P2=led[7];
			 delay();
		 }
		 if(C2==0)
		 {
			 P2=led[8];
			 delay();
		 }
		 if(C3==0)
		 {
			 P2=led[9];
			 delay();
		 }
		 R3=1; R4=0;
		 if (C2==0)
		 {
		 P2=led[0];
		 delay();
		 }
		 R4=1;
	 }
 }
			 
		 
			 

