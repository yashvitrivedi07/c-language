#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char name[30],rev[30];
	
	p("Enter your string : ");
	s("%[^\n]",name);
	
	int i,len=0;
	
	for(i=0;name[i]!=NULL;i++)
	{
		len++;
	}

	
	for(i=0;i<len;i++)
	{
		rev[i]=name[i];
	}
	
	for(i=0;i<len;i++)
	{
		name[i]=rev[len-i-1];
	}
	p("%s",name);
	
	
}
