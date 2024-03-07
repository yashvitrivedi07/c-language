#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
main()
{
	char name[20],rev[20];
	int n=0,pal=0,len,i;
	
	p("enter name : ");
	s("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--,n++)
	{
		rev[n]=name[i];
	}
	for(i=0;name[i]!='\0';i++)
	{
		if(rev[i]==name[i])
		{
			pal=1;
		}else
		{
			pal=0;
			break;
		}
	}
	if(pal==1)
	{
		p("Given string is a Palindrome.");
	}else{
		p("Given string is not Palindrome.");
	}
		
	
}
