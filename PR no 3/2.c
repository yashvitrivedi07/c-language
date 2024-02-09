#include<stdio.h>  
#define p printf
main(){                               
         int count=0,n,rev=0,rem;
         p("enter any number : ");
         scanf("%d",&n);
         while(n!=0){
		 	rem=n%10;
		 	n=n/10;
		 	count++;
		 }
		p("total digit in number : %d",count);
}
