/*
		Q.1 Write a Program to find the length of a string using a Pointer.
		For example,
		Input:
		Enter any string: hello world
		
		Output:
		The length of a string is: 11

*/
#include<stdio.h>
#define p printf
#define s scanf
main()
{
	char name[30];
	int i,len=0;
	p("Enter any string : ");
	s("%[^\n]",&name);
	
	for(i=0;name[i]!=NULL;i++)
	{
		len++;
	}
	int *ptr = &len;
	
	p("\nThe length of a string is : %d",len);
}
