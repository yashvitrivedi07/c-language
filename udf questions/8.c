#include<stdio.h>
#define p printf
#define s scanf

/*
	08. Write a Program to print the 1 to 100 number but divide by only for 3 & 5 using UDF.
*/

void divide(int n);

main()
{
	divide(100);
	
}

void divide(int n)
{
	
	int i;
	
	p("print the 1 to 100 number but divide by only for 3 & 5\n\n");
	for(i=0;i<=n;i++)
	{
		if(i%3==0||i%5==0)
		{
			p("%d\t",i);
		}
	}
}
