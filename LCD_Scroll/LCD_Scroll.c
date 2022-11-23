#include <REGX51.H>
#include <string.h>
#define LCD P2 /*Attached Lcd on Port*/
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;

/*Function to write command on Lcd*/
void command(const char value);
/*Function to display message on Lcd*/
void display(const char *v);
/*Function To Initialize Lcd*/
void LcdInit(void);
/*Function to Provide delay*/
void delay();
	
void delay()
{
	unsigned int i,j;
	for(i=0;i<=5;i++)
	{
	for(j=0;j<1275;j++);
	}
}
void LcdInit(void)
{
    command(0x01);
    command(0x38);
    //command(0x06);
  	//command(0x04);
    command(0x0c);
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
    short siLoop = 0;
    short siLen = 0;
	 int maxlen=15, len;
    const char *pszDisplayMsg = "NSIC";
    siLen = strlen(pszDisplayMsg); /*Calculate length of Message*/
	  len= (maxlen-siLen);
    LcdInit();  /*Lcd Initialize*/

        command(0x80); /*Address of DDRAM*/
        display(pszDisplayMsg);
        for(siLoop=0; siLoop <= len; siLoop++)
        {
            command(0x1c);
            delay();
        }
				
	      command(0x8f); /*Address of DDRAM*/
        display(pszDisplayMsg);
				for(siLoop=len;siLoop >= 0; siLoop--)
         {
           command(0x18);
           delay();
          }
				}
				 
	
