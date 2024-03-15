#include<stdio.h>
#define p printf
#define s scanf
main()
{
	char n[30];
	int a=0,a1=0,d=0,sc=0,i,len=0;
	p("creat your password : ");
	s("%s",&n);
	
	for(i=0;n[i]!=0;i++)
	{
		len++;
	} 
	if(len>=6)
	{
		for(i=0;i<len;i++)
		{
				if(n[i]>=65&&n[i]<=90)
				{
					a1++;
				}
				else if(n[i]>=97&&n[i]<=122)
				{
					a++;
				}
				else if(n[i]>=48&&n[i]<=57)
				{
					d++;
				}
				else if(n[i]>=33&&n[i]<=47||n[i]>=58&&n[i]<=64||n[i]>=91&&n[i]<=96||n[i]>=123&&n[i]<=126)
				{
					sc++;
				}
		
		}
		
	}
		else
		{
			p("----- Your Password is not strong-----");
		}
	if(a1>=1&&a>=1&&d>=1&&sc>=1)
	{
		p("password is strong");
	}
	else
	{
		p("password is not strong");
	}
		
		
}
