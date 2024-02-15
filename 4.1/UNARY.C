#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
    int n;
    clrscr();
    p("ENTER ANY NUMBER = ");
    scanf("%d",&n);
    printf("DECREMENT = %d\nINCREMENT = %d",--n,++n);

    getch();
}
