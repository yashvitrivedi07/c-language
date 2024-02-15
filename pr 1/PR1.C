#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    float c, formula;
    clrscr();
    p("enter tempreture in celsius = ");
    scanf("%f",&c);
    formula=(c*9/5)+32;
    printf("tempreture in fahrenheit = %.2f",formula);

    getch();
}
