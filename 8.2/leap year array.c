#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int x,y,i,j=0;
	p("Enter the first number: ");
	s("%d",&x);
	p("Enter the second number: ");
	s("%d",&y);
	int leap[y-x];
	
	for(i=x;i<y;i++)
	{
			if(i%4==0)
			{
				leap[j]=x;
				j++;
			}
			
	}
	for(i=0;i<j;i++)
	p("%d",leap[i]);
}
