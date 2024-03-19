#include<stdio.h>
#define p printf
#define s scanf
main()
{
	char n[20];
	p("enter string : ");
	s("%s",n);
	int len=0,i,j;
	int count;
	
	for(i=0;n[i]!='\0';i++)
	{
		len++;
	}
	p("\nstring length :%d\n",len);
	for(i=0;i<len;i++)
	{
		count=1;
		if(n[i]!='\0')
		{
			for(j=i+1;j<len;j++)
			{
			
				if(n[i]==n[j])
				{
					count++;
					n[j]='\0';
				}
			}
		p("%c : %d\n",n[i],count);
		}
		
	
			
	}
	
}
