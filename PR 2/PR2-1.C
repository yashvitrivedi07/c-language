#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	
	char n;
	clrscr();
	printf("enter any character = ");
	scanf("%c",&n);
	
	
	if(n>='A'&&n<='Z'||n>='a'&&n<='z')
	{
		p("%c = alphabet",n);
	}
	
	else if(n>='0'&&n<='9')
	{
		p("%c = digit",n);
	}
	
	else
	{
		p("%c = special character",n);
	}
	

	getch();

}