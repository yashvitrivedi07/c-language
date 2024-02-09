#include<stdio.h>  
#define p printf
main(){                               
    int sum=0,n,rem,mul=1,temp;
        
		p("enter any number : ");
        scanf("%d",&n);
        
		temp=n;
			while(temp!=0){
				rem=temp%10;
				sum+=rem;
				mul*=rem;
				temp=temp/10;
		 	} 
	
	
	if(sum==mul)
	{
		p("%d is a magic number\n",n);
	}
	else
	{
		p("%d is not a magic number\n", n);
	}
}
 
