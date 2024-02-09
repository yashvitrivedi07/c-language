#include<stdio.h>  
#define p printf
main(){                               
        int sum,n,rev=0,rem;
        p("enter any number : ");
        scanf("%d",&n);
        rem=n%10;
		while(n>=10){
		n=n/10;	
		}
		sum=n;
			p("sum of first and last digit : %d",rem+sum);
}
