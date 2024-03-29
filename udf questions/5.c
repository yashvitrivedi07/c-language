#include<stdio.h>
#define p printf
#define s scanf


/*
		05. Write a Program to convert ascending and descending order in 1D array using UDF.
		
		10 20 30 40 50     a[i] >= a[i+1]  
		                   
						   a    =  a[i]
						   a[i] =  a[j]    
						   a[j] =  a
*/

void main()
{
	int n,i;
	p("enter array size : ");
	s("%d",&n);
	
	int a[n];
	
	p("\n--------:enter array values:-------- \n\n");
	
	for(i=0;i<n;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	ascending(a , n);
	descending(a , n);
	
}


void ascending(int a[],int n)
{
	int i,j,num=0;
	
	for(i=0;i<n;i++,j++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				num = a[i];
				a[i] = a[j];
				a[j] = num;
			}
		}
	
	}
	p("\n---- : Ascending Order :----\n\n");
	for(i=0;i<n;i++)
	{
		p("%d\t",a[i]);
	}
	
}


void descending(int a[],int n)
{
	int i,j,num=0;
	
	for(i=0;i<n;i++,j++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				num = a[i];
				a[i] = a[j];
				a[j] = num;
			}
		}
	
	}
	p("\n\n\n---- :  Descending Order :----\n\n");
	for(i=0;i<n;i++)
	{
		p("%d\t",a[i]);
	}
	
}
