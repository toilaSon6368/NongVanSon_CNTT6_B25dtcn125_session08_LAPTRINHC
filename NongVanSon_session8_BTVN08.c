#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
    int rows, cols, i, j;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("\nBat dau nhap cac phan tu cho ma tran:\n");
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMa tran ban vua nhap la:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) { 
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

