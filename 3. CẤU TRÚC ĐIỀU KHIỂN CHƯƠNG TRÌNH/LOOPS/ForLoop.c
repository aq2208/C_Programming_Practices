//Tinh tong cua a so nguyen dau tien, a nhap tu ban phim
#include <stdio.h>
int main() {
    int sum= 0;
    int a;
    printf("\nNhap so nguyen a = ");
    scanf("%d", &a);
    for (int i = 1; i <=a; ++i) {
        sum += i;
    }
    printf("\nTong cua %d so nguyen dau tien bang = %d", a, sum);
}