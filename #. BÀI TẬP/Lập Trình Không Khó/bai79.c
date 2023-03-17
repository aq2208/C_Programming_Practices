/*Đề bài : Hãy đếm số lượng chữ số của số nguyên dương n*/

#include <stdio.h>

int main() {
    long long int n;
    printf("\nNhap vao so nguyen n = ");
    scanf("%d", &n);
    long long int i = n;
    int soChuSo = 0;
    while ( n >= 1 )
    {
        soChuSo++;
        n = n / 10;
    }
    printf("\nSo chu so cua %lld la %d", i, soChuSo);
}