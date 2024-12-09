#include <stdio.h>

void tinh_giai_thua(int n) {
    int giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    printf("Giai thua cua %d la: %d\n", n, giai_thua);
}
int main() {
    int so;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &so);
    tinh_giai_thua(so);
    return 0;
}

