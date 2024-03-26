#include<stdio.h>
#define p printf
#define s scanf
main()
{
	
	char password[30];
	
	p("Create your password : ");
	gets(password);
	int i,len=0;
	
	for(i=0;password[i]!=NULL;i++)
	{
		len++;
	}
	int capital=0,digit=0,symbol=0,small=0;
	
			if(len>=6)
			{
				for(i=0;i<len;i++)
				{
					if(password[i]>=65&&password[i]<=90)
					{
						capital++;
					}
					else if(password[i]>=97&&password[i]<=122)
					{
						small++;
					}
					else if(password[i]>=48&&password[i]<=57)
					{
						digit++;
					}
					else if(password[i]>=33&&password[i]<=47||password[i]>=58&&password[i]<=64||password[i]>=91&&password[i]<=96||password[i]>=123&&password[i]<=126)
					{
						symbol++;
					}
				}
			}
			
			
		if(capital>=1 && digit>=1 && symbol>=1 && small>=1)
		{
			p("Your password is Strong.");
		}
		else{

			{
				p("Your password is not Strong ");
			}
		}
}
		

