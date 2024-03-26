#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char name[30];
	int len=0,i;
	
	p("Enter any string: : ");
	s("%[^\n]",&name);
	
 	//  string in toggle case
	
	for(i=0;name[i]!=NULL;i++)
	{
		len++;
	}

	if(name[0]>=97&&name[0]<=122)
	{
		name[0]-=32;
	}
	
	p("\n\n Title Case : %s",name);
	
}
