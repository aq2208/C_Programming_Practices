#include <stdio.h>
int main(){
    float a, b, c, max;
    printf("\nNhap vao so a = "); scanf("%f", &a);
    printf("\nNhap vao so b = "); scanf("%f", &b);
    printf("\nNhap vao so c = "); scanf("%f", &c);

    max = a;
    if (max<b) {max = b ;}
    if (max < c) {max = c;}
    

    printf("\nSo lon nhat trong ba so la : %.2f", max);



// Tìm max theo C2
    // Không khuyến khích
    // if (a >= b && a >= c)
    // {
    //     printf("Max = %f", a);
    // }
    // else if (b >= a && b >= c)
    // {
    //     printf("Max = %f", b);
    // }
    // else
    // {
    //     printf("Max = %f", c);
    // }
}