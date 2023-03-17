//De bai: tinh tong cac so trong doan [a,b]
#include <stdio.h>
int main() {
    int a, b, sum;
    sum = 0;
    printf("\nNhap vao so nguyen a = "); scanf("%d",&a);
    printf("\nNhap vao so nguyen b = "); scanf("%d",&b);

//For Loop
    for (int i = a; i<=b; ++i)
    {
        sum += i;
    }
    printf("\nsum = %d", sum);

//While Loop
    int i = a;
    while (i <= b) {
        sum += i;
        ++i;
    }
    printf("\nsum = %d", sum);

//do...while Loop
    int i=a;
    do {
        sum += i;
        ++i;
    }while (i<=b);
    printf("\nsum = %d", sum);
}