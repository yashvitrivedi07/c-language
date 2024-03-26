#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char n[30];
	p("enter your name : ");
	s("%[^\n]",n);
	
	int len=0,i,size,j;
	
	
	for(i=0;n[i]!=NULL;i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(n[i]==32)
		{
			size=i;
			if (n[i+1]>=97&&n[i+1]<=122)
			{
				n[i+1]-=32;
			}
		for(j=i;j<len;j++)
		{
			n[j]=n[j+1]; 
		}
		len--;
		i++;
			
		}
	}
	
for(i=0;i<len;i++)
{
	p("%c",n[i]);
}
}
