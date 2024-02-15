#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    int a,b;
    clrscr();
    p("enter a = ");
    scanf("%d",&a);
    p("\nenter b = ");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    p("\nenter a = %d",a);

    p("\nenter b = %d",b);

    getch();
}
