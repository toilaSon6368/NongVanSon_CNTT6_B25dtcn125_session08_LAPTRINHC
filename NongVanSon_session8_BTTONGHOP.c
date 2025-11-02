#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
#define MAX 100   

void hienThi(int arr[], int n) {
    if (n == 0) {
        printf("Mang hien dang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can chen (0 -> %d): ", *n);
    scanf("%d", &pos);
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;

    printf("Da them %d vao vi tri %d!\n", value, pos);
}

void xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf("Mang rong, khong co gi de xoa!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can xoa (0 -> %d): ", *n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa phan tu o vi tri %d!\n", pos);
}

void capNhatPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong, khong co gi de cap nhat!\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can cap nhat (0 -> %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[pos] = value;
    printf("Da cap nhat vi tri %d thanh %d!\n", pos, value);
}

void timKiemPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int value, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Tim thay %d tai vi tri %d\n", value, i);
            found = 1;
        }
    }
    if (!found)
        printf("Khong tim thay %d trong mang!\n", value);
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n——————————————— Quan ly danh sach so nguyen ———————————————\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("0. Thoat chuong trinh\n");
        printf("———————————————————————————————————————————————————————\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: themPhanTu(arr, &n); break;
            case 2: xoaPhanTu(arr, &n); break;
            case 3: capNhatPhanTu(arr, n); break;
            case 4: timKiemPhanTu(arr, n); break;
            case 5: hienThi(arr, n); break;
            case 0: printf("Thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 0);

    return 0;
}
    return 0;
}


