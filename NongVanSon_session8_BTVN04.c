#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)


int main() {
    int number, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("So phan tu khong hop le!");        
    }

    int arr[number];  // khi biet number moi khai bao mang

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < number; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu vua nhap la: ");
    for (i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


