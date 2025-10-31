#include <stdio.h>
#include <math.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    printf("Mang ban dau: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] + 3; 
        } else {
            arr[i] = arr[i] + 2; 
        }
    }
    printf("Mang sau khi thay doi: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




