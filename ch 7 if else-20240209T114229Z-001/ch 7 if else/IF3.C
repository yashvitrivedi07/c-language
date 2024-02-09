#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();
	printf("Enter any character : ");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='o'||n=='u'||n=='i'||n=='A'||n=='E'||n=='O'||n=='U'||n=='I')
	{
		printf("%c is vowel---",n);
	}
	else
	{
		printf("%c is console---",n);
	}
	getch();
}