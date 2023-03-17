#include <stdio.h>
int main()
{
    int a, b, min, max ;
    
    printf("\nNhap so a = ");
    scanf("%d",&a);
    printf("\nNhap so b = ");
    scanf("%d",&b);

    min = (a<b)?a:b;
    max = (a>b)?a:b;

    printf("\nSo lon nhat la : %d", max);
    printf("\nSo nho nhat la : %d", min);
    
    
}