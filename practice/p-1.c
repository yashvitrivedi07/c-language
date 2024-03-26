#include<stdio.h>
#define p printf
#define s scanf
main()
{


    int j,n,i;
 
    printf("enter any number ");
    scanf("%d",&n);
    int a[n],rem[n];

    for(i=0;i<n;i++)
    {
    	p("a[%d] : ",i);
    	s("%d",&a[i]);
	}
	
	for(i=0;a[i]!=0;i++)
    {
		for(j=n-1;a[j]!=0;j--)
	    {
	    	a[i]=a[j];
		}
	}

    for(i=0;i<n;i++)
    {
    	p("%d : ",a[i]);
    }
}
	
	
	
	
	
	

