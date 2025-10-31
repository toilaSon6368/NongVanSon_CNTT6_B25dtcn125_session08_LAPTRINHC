#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)

int main() {
    int arr[5] = {2, 7, 100, -8, 15};    
    int max = arr[0];
    int min = arr[0];
    int i; 
    printf("Mang da khai bao la: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    for (i = 1; i < 5; i++) { 
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    printf("Phan tu lon nhat (max) la: %d\n", max);
    printf("Phan tu nho nhat (min) la: %d\n", min);
    return 0;
}
