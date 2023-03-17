/*Đề bài : Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n*/

#include <stdio.h>

int main() {
    int n;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d", &n);
    int i = 1, sum = 0;
    for ( ; i <= n; i++) {
        sum += i;
    }
    printf("\nS(%d) = %d ", n, sum);

}