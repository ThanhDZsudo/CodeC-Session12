#include <stdio.h>

void createMatrix(int a, int b) {
    int matrix[a][b];
    printf("Nhap cac phan tu cua ma tran: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a, b;
    printf("Nhap so hang: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);
    matrix(a, b);
    return 0;
}

