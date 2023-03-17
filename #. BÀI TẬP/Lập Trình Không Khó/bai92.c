//Tìm ước số chung lớn nhất của 2 số nguyên dương
//UCLN : số lớn nhất cả 2 số đều chia hết

#include <stdio.h>
int main()
{
    int a, b; 
    printf("\nNhap vao so nguyen duong a = "); scanf("%d", &a);
    printf("\nNhap vao so nguyen duong b = "); scanf("%d", &b);

    int i = 1; 
    for (; i <= a || i <= b; i++ )
    {
        if ( a % i == 0 )
        {
            int UCLN = a/i;
            if ( b % UCLN == 0 )
            { 
                printf("UCLN(%d, %d) = %d", a, b, UCLN);
                break;
            }
            else continue;
        }
        else continue;
    }
}