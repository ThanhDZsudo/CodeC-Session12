#include <stdio.h>

void biggestWish(int a, int b){
    int ucln;
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    ucln=a;
    printf("Uoc chung lon nhat cua hai so la: %d \n", ucln);
}
int main(){
    int num1 = 27, num2 = 99;
    biggestWish(num1, num2);
    return 0;
}

