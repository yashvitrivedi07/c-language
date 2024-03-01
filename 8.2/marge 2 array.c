#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int s1,s2,i
	;
	p("enter size of first array : ");
	s("%d",&s1);
	int a[s1];
	p("enter size of second array : ");
	s("%d",&s2);	
	int b[s2];
	int c[s1+s2];
	p("\n\n-------------enter value of 1st array-------------\n");
	for(i=0;i<s1;i++)
	{
		p("enter a[%d]",i);
		s("%d",&a[i]);
	}
	p("\n\n-------------enter value of 2nd array-------------\n");
	for(i=0;i<s2;i++)
	{
		p("enter b[%d]",i);
		s("%d",&b[i]);
	}
	for(i=0;i<s1;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<s2;i++)
	{
		c[i+s1]=b[i];
	}
	for(i=0;i<s1+s2;i++)
	{
		p("%d ",c[i]);
	}	
	
}
