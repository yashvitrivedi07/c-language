/*
	Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
		For example,
		Input:
		Enter array's size: 2
		
		Enter array elements:
		a[0][0] = 3
		a[0][1] = 2
		a[1][0] = 5
		a[1][1] = 4
		
		Output:
		Cubes of all elements:
		9   4
		25 64
*/
#include<stdio.h>
#define p printf
#define s scanf


void cube(int r,int c,int *ptr);

void main()
{
	int r,c,i,j;
	
	p("enter row size : ");
	s("%d",&r);
	p("enter column size : ");
	s("%d",&c);
	
	int a[r][c];
	
	
	for(i=0 ;i<r ;i++)
	{
		for(j=0 ;j<c ;j++)
		{
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
		}
	}
	
	cube(r,c,a);
}

void cube(int r,int c,int *ptr)
{
	int i,j,q,v;
	for(i=0 ;i<r ;i++)
	{
		for(j=0 ;j<c ;j++)
		{
			v = *((ptr+i*c) + j);
			q = v * v * v;
			p("%d ",q);			
		}
		printf("\n");
	}
	
	
}
