#include<stdio.h>
#define p printf
#define s scanf

int binary(int n);

main()
{
	int n;

	p("enter your name : ");
	s("%d",&n);
	
	binary(n);
	
	
}

int binary (int n)
{
	
	int i,j,num=0;
	int array[100];
	
	
	for(i=0; num>=0;i++)
	{
		array[i] = num % 2;
        num = num / 2;
	
	}
	
	 for (j=i-1 ;j>=0 ;j--) 
	 {
        printf("%d", array[j]);
     }
    
}
