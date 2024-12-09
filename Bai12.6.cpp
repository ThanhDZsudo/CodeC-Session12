#include <stdio.h>

void kiem_tra_hoan_hao(int n) {
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    if (tong == n) {
        printf("%d la so hoan hao\n", n);
    } else {
        printf("%d khong phai la so hoan hao\n", n);
    }
}
int main() {
    int so_1, so_2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so_1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so_2);
    kiem_tra_hoan_hao(so_1);
    kiem_tra_hoan_hao(so_2);
    return 0;
}

