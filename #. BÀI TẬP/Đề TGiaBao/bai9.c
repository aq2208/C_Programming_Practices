//Đề bài : Viết chương trình tính giai thừa của một số n

#include <stdio.h>

long long int giaiThua( int a )
{
    if ( a == 0 || a == 1 )
        return 1;
    else 
        return a*giaiThua(a-1);
}

int main()
{
    int n;
    printf("\nNhap vao so nguyen duong n = ");
    scanf("%d", &n);
    int x = giaiThua(n);
    printf("\nGiai thua cua %d la %lld", n, x);
}