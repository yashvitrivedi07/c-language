#include<stdio.h>
#include<conio.h>
main()
{
      int salary,hra,da,ta,gs;
      clrscr();
      printf("enter base salary = );
      scanf("%d",&salary);
      hra=salary*10/100;
      da=salary*5/100;
      ta=salary*8/100;
      gs=salary+hra+ta+da;
      printf("\n\nGROSS PROFIT = %d",gs);
      getch();



}