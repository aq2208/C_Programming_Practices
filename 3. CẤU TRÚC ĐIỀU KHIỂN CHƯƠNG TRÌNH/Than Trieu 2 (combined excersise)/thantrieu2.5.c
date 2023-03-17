//Đề bài: Nhập số tự nhiên n và tính tổng S = 1 + 1.2 + 1.2.3 +...+ 1.2.3...n

#include <stdio.h>
int main()
{
    int n, S=1, i=2, s=1;
    printf("\nNhap so tu nhien n = ");
    scanf("%d", &n);
    while ( i<=n )
    {
        s *= i;
        S += s;
        ++i;
    }
    printf("\nTong cua day tren la: %d",S);

}