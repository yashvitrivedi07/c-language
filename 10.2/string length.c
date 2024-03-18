#include<stdio.h>
#define p printf
#define s scanf
void y (char n[20]);
void main()
{
	char n[20];
	p("enter string : ");
	s("%[^\n]",&n);
	y(n);
	
}
void y(char n[20]){

	int i,len=0;
		for(i=0;n[i]!=0;i++)
		{
			len++;
		}
		p("\nstring Length is : %d",len);
	}
