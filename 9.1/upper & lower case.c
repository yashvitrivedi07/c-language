#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char name[30];
	int len=0,i;
	
	p("Enter any string: : ");
	s("%[^\n]",&name);
	
 	//Lowercase  ---->   Uppercase
	
	for(i=0;name[i]!=NULL;i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i]>=97&&name[i]<=122)
		{
			name[i]-=32;
		}
	}	
	
	p("\n\nUppercase : %s",name);
	

	//Uppercase  ---->    Lowercase



	for(i=0;i<len;i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
			name[i]+=32;
		}
	}	

	p("\n\nLowercase : %s",name);
	
}
