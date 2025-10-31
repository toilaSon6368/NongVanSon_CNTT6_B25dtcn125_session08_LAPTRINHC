#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("So phan tu phai la so duong!\n");
    }
    int arr[n];
    printf("Nhap cac phan tu cho mang (phai la so le):\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        do {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("Ban da nhap so chan. Vui long nhap lai mot so le: ");
            }           
        } while (arr[i] % 2 == 0); 
    }
    printf("\nMang (toan so le) ban vua nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


