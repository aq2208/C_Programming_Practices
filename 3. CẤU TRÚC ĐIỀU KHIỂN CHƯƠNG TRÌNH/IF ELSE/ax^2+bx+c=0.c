#include <stdio.h>
#include <math.h>
int main(){
    
    int a, b, c;
    printf("\nNhap a = "); scanf("%d", &a);
    printf("\nNhap b = "); scanf("%d", &b);
    printf("\nNhap c = "); scanf("%d", &c);
    printf("\nGiai pt bac 2 : %dx^2 + %dx + %d = 0", a, b, c);

    float denta;
    denta = b*b - 4*a*c;
    
    if (denta<0) {printf("\nPT vo nghiem");}
    else if (denta ==0) {
        float x;
        x = (-b)/(2*a);
            printf("\nPT co 1 nghiem kep x1 = x2 = %.2f", x);}    
    else 
    {float x1, x2;
    x1 = (-b + sqrt(denta))/(2*a);
    x2 = (-b - sqrt(denta))/(2*a);
    printf("\nPT co 2 nghiem phan biet \nx1 = %.2f \nx2 = %.2f", x1, x2);}


}