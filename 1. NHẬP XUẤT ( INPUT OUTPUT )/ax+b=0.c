#include <stdio.h>
int main(){

    int a, b;
    float x;
    printf("\nNhap a = "); 
    scanf("%d", &a);
    printf("\nNhap b = "); 
    scanf("%d", &b);
    printf("\nGiai pt %dx + %d = 0", a, b);
     
    x = ((float)(0-b))/a;

    printf("\nNghiem cua pt la x = %.2f", x );


}