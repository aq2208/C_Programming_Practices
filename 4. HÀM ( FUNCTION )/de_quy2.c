//tim so n!

#include <stdio.h>

int giaithua( int i )
{
    if ( i == 0 || i == 1 )  //trường hợp cơ sở, điều kiện để hàm đệ quy dừng lại
        return i;
    else return i*giaithua(i-1);  //gọi lại chính hàm đó (đệ quy)
}

int main()
{
    int n; 
    printf("\nNhap so tu nhien n = ");
    scanf("%d", &n);
    printf("\n%d! = %d", n, giaithua(n));
}