#include<stdio.h>
#define p printf
#define s scanf

int main() {
    int r, c;
    p("Enter row size: ");
    s("%d", &r);
    p("Enter column size: ");
    s("%d", &c);
    
    int a[r][c];
    int i, j,k;
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            p("a[%d][%d] : ", i, j);
            s("%d", &a[i][j]);
        }
    }   
    
    p("Entered array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            p("%d ", a[i][j]);
        }
        p("\n");
    }
    
    int swap;
    
    // Sorting each column
    for(j = 0; j < c; j++) {
        for(i = 0; i < r - 1; i++) {
            for(k = 0; k < r - i - 1; k++) {
                if(a[k][j] > a[k + 1][j]) {
                    swap = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = swap;
                }
            }
        }
    }
    
    p("\nSorted array (each column in ascending order):\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            p("%d ", a[i][j]);
        }
        p("\n");
    }
    
    return 0;
}

