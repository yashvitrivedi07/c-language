#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    int a=12,b=6;
    clrscr();
    p("addition of 12 and 6 is %d\n",a+b);
    p("subtraction of 12 and 6 is %d\n",a-b);
    p("multiplication of 12 and 6 is %d\n",a*b);
    p("division of 12 and 6 is %d\n",a/b);
    p("modulo of 12 and 6 is %d\n\n",a%b);

    p("%d + %d  = %d\n",a,b,a+b);
    p("%d - %d  = %d\n",a,b,a-b);
    p("%d * %d  = %d\n",a,b,a*b);
    p("%d / %d  = %d\n",a,b,a/b);
    p("%d /* %d = %d\n",a,b,a%b);
    getch();
}
