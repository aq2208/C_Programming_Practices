/*Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không*/

#include <stdio.h>
int main() 
{
    float a,b;
    printf("\nNhap vao so thuc thu nhat = "); scanf("%f", &a);
    printf("\nNhap vao so thuc thu hai = "); scanf("%f", &b);
    if ( a/b > 0 || b/a > 0 ) printf("\nHai so nay cung dau");
    else if ( a/b < 0 || b/a < 0 ) printf("\nHai so nay khong cung dau");
    else printf("\nMot trong hai so la so khong");
}