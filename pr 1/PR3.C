#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    int f,s,t;
    clrscr();
    p("enter first angle = ");
    scanf("%d",&f);
    p("enter second angle = ");
    scanf("%d",&s);
    t=180-(f+s);
    printf("THIRD ANGLE = %d",t);
    getch();
}
