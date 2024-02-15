#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    float pi=3.14,a;
    int radius;

    clrscr();
    p("enter radius of circle = ");
    scanf("%d",&radius);
    p("radius of a circle = %d\n",radius);
    a=pi*radius*radius;
    p("THE ARRA OF A CIRCLE = %f\n",a);


    getch();
}
