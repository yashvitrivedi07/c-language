#include<stdio.h>
#define p printf
main(){
	int a=1,n;
	p("enter any number : ");
	scanf("%d",&n);
	do{
		if(a%2==0){
			p("%d\n",a);
		}
		a++;
	}while(a<=n);
	
	
}
