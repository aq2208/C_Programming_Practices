/*Đề bài: Nhập vào 2 số dương m, n sau đó in ra màn hình một hình chữ nhật có m hàng, mỗi hàng có n dấu x
ví dụ : m = 4, n = 5
            x   x   x   x   x
            x   x   x   x   x
            x   x   x   x   x
            x   x   x   x   x
*/

#include <stdio.h>

void xxx( int m, int n )
{
    for ( int i = 1; i <= m && m >= 1; i++)
    {
        for ( int a = 1; n >= 1 && a <= n; a++ )
        {
            printf("\tx");
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    printf("\nNhap vao so tu nhien m = "); scanf("%d", &m);
    printf("\nNhap vao so tu nhien n = "); scanf("%d", &n);
    xxx(m, n);
}