  #include <REGX51.H>
	sbit rs = P1^0;
	sbit rw = P1^1;
	sbit en = P1^2;
	void lcdcmd (unsigned char);
	void lcddat(unsigned char);
	void delay();
	
	void lcdcmd(unsigned char val)
	{
		P2=val;
		rs=0;
		rw=0;
		en=1;
		delay();
		en=0;
	}
	void lcddat(unsigned char val)
	{
		P2=val;
		rs=1;
		rw=0;
		en=1;
		delay();
		en=0;
	}
	void delay()
	{
		unsigned int i,j;
		for(i=0;j<=9;i++)
	{
	  for(j=0;j<1275;j++);
	}
}
	
void main()
{
	P2=0x00;
	while(1)
	{
		lcdcmd(0x38); //8-bit mode
		delay();
		lcdcmd(0x08); //display,couser off
		delay();
		lcdcmd(0x0C); //display on, couser off
		delay();
		lcdcmd(0x0E);	//display on,couser blink
		delay();
		
    lcdcmd(0x80);
		lcddat('M');
		delay(); 
		
		lcdcmd(0x81);
		lcddat('E');
		delay();
		
		lcdcmd(0x82);
		lcddat('O');
		delay();
		
		lcdcmd(0x83);
		lcddat('W');
		delay();
	}
}