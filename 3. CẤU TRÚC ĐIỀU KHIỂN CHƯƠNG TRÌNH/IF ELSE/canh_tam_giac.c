#include <stdio.h>
int main() {
    float a, b, c;
    printf("\nNhap vao do dai ba canh cua tam giac");
    scanf("%f%f%f", &a, &b, &c);

    float ab= a+b;
    float ac= a+c;
    float bc= c+b;
    if (ab>c) {
        if (ac>b) {
           if (bc>a) {printf("\nBa canh tren la ba canh cua mot tam giac");} 
           else {printf("\nBa canh tren khong phai ba canh cua mot tam giac");}

        }else {printf("\nBa canh tren khong phai ba canh cua mot tam giac");}
    }
    else {printf("\nBa canh tren khong phai ba canh cua mot tam giac");} 


    
}