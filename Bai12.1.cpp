#include <stdio.h>

void tinh_tong(int a, int b) {
    int tong = a + b;
    printf("Tong cua %d va %d la: %d\n", a, b, tong);
}
int main() {
    int so_1 = 83;
    int so_2 = 86;
    tinh_tong(so_1, so_2);
    return 0;
}
