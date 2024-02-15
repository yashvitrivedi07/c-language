#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    int t,w,l;
    clrscr();
    p("enter length of rectangle = ");
    scanf("%d",&l);
    p("\nenter width of rectangle = ");
    scanf("%d",&w);
    p("LENGTH = %d\n",l);
    p("LENGTH = %d\n",w);
    t=l*w;
    p("are of a rectangle = %d",t);

    getch();
}
