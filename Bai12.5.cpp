#include <stdio.h>

void kiem_tra_nguyen_to(int n) {
    if (n <= 1) {
        printf("%d khong phai la so nguyen to\n", n);
        return;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d khong phai la so nguyen to\n", n);
            return;
        }
    }
    printf("%d la so nguyen to\n", n);
}
int main() {
    int so_1, so_2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so_1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so_2);
    kiem_tra_nguyen_to(so_1);
    kiem_tra_nguyen_to(so_2);
    return 0;
}

