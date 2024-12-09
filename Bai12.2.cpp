#include <stdio.h>

void in_phan_tu(int arr[], int kich_thuoc) {
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    in_phan_tu(mang, kich_thuoc);

    return 0;
}

