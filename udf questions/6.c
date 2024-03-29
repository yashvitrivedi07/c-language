#include<stdio.h>
#define p printf
#define s scanf
/*
		Write a Program to find the large number of 1D array using UDF.
*/

void large(int n,int a[]);

int main()
{
	int n,i;
	p("enter array size : ");
	s("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	
	large (n,a);
	
}

void large(int n,int a[])
{
	int i,j,num = a[0];
	
	for(i=0;i<n;i++)
	{
	
			if(a[i] > num)
			{
				num = a[i];
			}
		
	}
	
	p("%d",num);
	
}

