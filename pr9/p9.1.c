/*
	Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/
#include<stdio.h>
#define p printf
#define s scanf

main()
{
	FILE *odd;
	FILE *even;
	
	int i;
	odd = fopen("odd_file.txt","w");
	even = fopen("even_file.txt","w");
	
	for(i=50; i<=70; i++)
	{
		if(i%2==1)
		{
			fprintf(odd,"%d\t",i);
		}
		
		else if(i%2==0)
		{
			fprintf(even,"%d\t",i);
		}
		
	}
	
	
	
}
