#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int i;
int laSoNguyenTo(int n) {
    if (n < 2)
        return 0;
    for ( i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n, i;
    printf("Nhap do dai cua mang : ");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang sau khi nhap la : ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nCac so nguyen to trong mang la : ");
    int coSoNguyenTo = 0;
    for (i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            coSoNguyenTo = 1;
        }
    }
    if (!coSoNguyenTo)
        printf("Khong co so nguyen to nao trong mang.");
    printf("\n");
    return 0;
}

