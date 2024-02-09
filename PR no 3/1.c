#include<stdio.h>  
#define p printf
main(){                               
         char a='a';
         do{
         
			p("\t%c\n\n",a);
		 	a+=3;
			a++;
					 
		 }while(a<='z');
        
}
