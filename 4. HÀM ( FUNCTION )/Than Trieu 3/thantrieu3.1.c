/*Đề bài : Hãy nhập vào 2 số dương m, n sau đó in ra màn hình một hình chữ nhật có m hàng, mỗi hàng liệt kê
giá trị từ 1 đến n. Ví dụ : m = 4, n = 4
                    1   2   3   4
                    1   2   3   4
                    1   2   3   4
                    1   2   3   4
*/

#include <stdio.h>

void anhQuan ( int m, int n )
{
    printf("\nNhap vao so tu nhien m = "); scanf("%d", &m);
    printf("\nNhap vao so tu nhien n = "); scanf("%d", &n);
    for ( int i = 1; m >= 1 && i <= m ; i++)
    {
        for ( int a = 1; n >= 1 && a <= n ; a++)
        {
            printf("\t%d", a);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    anhQuan( m, n );
}



