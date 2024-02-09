#include<stdio.h>                    
#define p printf
main()
{ 
	char i,j;
	for(i='A';i<='E';i++){
		for(j=i;j>='A';j--){
			p("%c ",j);	
		}
		p("\n");
	}


}





