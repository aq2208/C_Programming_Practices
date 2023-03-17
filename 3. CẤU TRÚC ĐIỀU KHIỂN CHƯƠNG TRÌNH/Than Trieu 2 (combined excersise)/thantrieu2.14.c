/*Đề bài: Nhập vào số tự nhiên n và tính n! theo công thức:
            n! = 1 nếu n=0
            n! = n*(n-1)*(n-2)*...*2*1 nếu n>0 */

#include <stdio.h>
int main() 
{
    int n, giaiThua=1;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d",&n);
    if( n == 0) printf("\n%d! = 1",n);
    else if ( n>0 )
    {
        for ( int i = 1; i <= n; ++i)
        {
            giaiThua *= i;
        }
        printf("\n%d! = %d", n, giaiThua);
    }
}

