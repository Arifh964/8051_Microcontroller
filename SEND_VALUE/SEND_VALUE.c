#include <REGX51.H>
int i,j,y,k;
void delay(y)
{
	for(i=0;i<=y;i++)
	{
			for(j=0;j<=1275;j++);
	}
}
void main()
{
	int z;
	for(z=0;z<=255;z++)
	{
		P1=z;
		delay(100);
	}
}