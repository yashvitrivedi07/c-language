#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int r, c, n, i, j, sum = 0;
    p("Enter the array's row size: ");
    s("%d", &r);
    p("Enter the array's column size: ");
    s("%d", &c);
    int a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            p("a[%d][%d] :", i, j);
            s("%d", &a[i][j]);
        }
    }
    p("Enter column number : ");
    s("%d", &n);
    for (i = 0; i < r; i++)
    {
        p("%d\n", a[i][n]);
        sum += a[i][n];
    }
    p("Sum of column %d : %d\n", n, sum);
}

