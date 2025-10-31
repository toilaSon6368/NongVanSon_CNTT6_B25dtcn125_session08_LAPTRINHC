#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main() {
	int i, evenNumber = 0; // so chan = 0
    int arr[5] = {2, 4, 7, 10, 13};  
    
    printf("Cac so chan trong mang la: ");
    for ( i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            evenNumber = 1;
        }
    }

    if (!evenNumber) {
        printf("\nMang khong chua so chan.");
    }

    return 0;
}


