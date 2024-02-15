#include<stdio.h>
#include<conio.h>
#define P printf
#define s scanf
main()
{
    int t,p;
    float r,a;
    clrscr();
    P("ENTER PRINCIPLE = ");
    s("%d",&p);
    P("ENTER ANNUALLY RATE OF INTEREST = ");
    s("%f",&r);
    P("ENTER YEAR = ");
    s("%d",&t);
    a=p*r*t;
    P("SIMPLE INTEREST RATE : %.2f",a/100);

    getch();
}
