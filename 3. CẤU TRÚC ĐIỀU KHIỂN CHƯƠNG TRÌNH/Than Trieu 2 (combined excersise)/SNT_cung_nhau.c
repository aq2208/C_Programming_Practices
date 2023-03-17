/*Đề bài: Nhập vào 2 số tự nhiên m và n rồi kiểm tra xem chúng có phải 2 số nguyên tố cùng nhau không ?
(2 số có UCLN = 1) */

#include <stdio.h>
int main()
{
    int m,n,i, test, x = 1;
    printf("\nNhap vao so tu nhien m = "); scanf("%d", &m);
    printf("\nNhap vao so tu nhien n = "); scanf("%d", &n);
    if ( m == n ) printf("\n%d va %d khong phai la 2 so nguyen to cung nhau", m, n);
    else if (m > n)
    {
        for ( i = 2; i < m; ++i)
        {
            if ( m % i == 0)
            {
                test = m / i ;
                if ( n % test == 0)
                { 
                    printf("\n%d va %d khong phai la hai so nguyen to cung nhau", m, n);
                    x = 0;
                    break;
                }    
                else continue;
            }
            else continue;    
        }
        if (x) printf("\n%d va %d la hai so nguyen to cung nhau", m, n);
    }
    else 
    {
        for ( i = 2; i < n; ++i)
        {
            if ( n % i == 0)
            {
                test = n / i ;
                if ( m % test == 0)
                { 
                    printf("\n%d va %d khong phai la hai so nguyen to cung nhau", m, n);
                    x = 0;
                    break;
                }    
                else continue;
            }
            else continue;    
        }
        if (x) printf("\n%d va %d la hai so nguyen to cung nhau", m, n);
    }    
}

