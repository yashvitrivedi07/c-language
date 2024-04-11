#include<stdio.h>
#define p printf
#define s scanf

void sum (int n, int array[]);
void rev (int n, int array[]);
main()
{
	int n,i;
	p("Enter size of array : ");
	s("%d",&n);
	
	int array[n];
	
	p("\n--- : Enter Array Elements : ---");
	
	for(i=0; i<n; i++)
	{
		p("\narray[%d] : ",i);
		s("%d",&array[i]);
	}

	sum(n,array);
	rev(n,array);

}
	
void sum (int n, int array[])
{
	int i,sum1=0;
	for(i=0; i<n; i++)
	{
		sum1 += array[i];
	}
	
	p("\nSum of elements : %d",sum1);
}	


void rev (int n, int array[])
{
	int i,sum1=0,j=0;
	int rev1[n];
	for(i=n-1; i>=0; i--,j++)
	{
		rev1[i] = array[j];
	}
	
	p("\n\nreverse :---\n\n");
	for(i=0; i<n; i++)
	{
		p("%d\t",rev1[i]);
	}
}	
