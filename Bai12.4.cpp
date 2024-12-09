#include <stdio.h>

void tim_max(int arr[], int kich_thuoc) {
    int max = arr[0];
    for (int i = 1; i < kich_thuoc; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("So lon nhat trong mang la: %d\n", max);
}

int main() {
    int mang[] = {6,29,33,83,86};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    tim_max(mang, kich_thuoc);

    return 0;
}

