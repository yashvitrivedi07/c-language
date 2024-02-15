#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	char n;
	clrscr();
	p("enter m = monday\n");
	p("enter t = tuesday\n");
	p("enter w = wednesday\n");
	p("enter T = thursday\n");
	p("enter f = friday\n");
	p("enter s = saturday\n");
	p("enter S = sunday\n");
	p("enter your choice = ");
	scanf("%c",&n);
	switch(n) {
		case'm':
			printf("monday");
			break;
		case't':
			printf("tuesday");
			break;
		case'w':
			printf("wednesday");
			break;
		case'T':
			printf("thursday");
			break;
		case'f':
			printf("friday");
			break;
		case's':
			printf("saturday");
			break;
		case'S':
			printf("sunday");
			break;
		default:
			p("invalid input");

	      }



	getch();


}