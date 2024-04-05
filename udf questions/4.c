/*
		04. Write a Program to print all Alphabets using the recursion concept.
*/

#include<stdio.h>
#define p printf
#define s scanf

char alphabet(char alpha);

	void main()
	{
		char alpha = 'a';
		
		alphabet(alpha);
		
	}

char alphabet(char alpha)
{
		
		if(alpha <= 'z')
		{
				p("%c\t",alpha);
				alpha ++;
				alphabet(alpha);
		}
		
		
}
