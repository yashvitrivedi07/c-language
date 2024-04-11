#include<stdio.h>
#define p printf
#define s scanf



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
	

	int *ptr[n];
	int *cube[n];
	
	for(i=0; i<n; i++)
	{
		ptr[i] = &array[i];
	}
	
	for(i=0; i<n; i++)
	{
		cube[i] = (*ptr[i])*(*ptr[i])*(*ptr[i]);
	}
	
	p("--- : Cube of each elements : ---\n");
	for(i=0; i<n; i++)
	{
		p("\t%d\n",cube[i]);
	}

}

