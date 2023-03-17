//Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì

#include <stdio.h>
int main()
{
    float a, b, c;
    printf("\nNhap vao 3 canh cua tam giac :   "); 
    scanf("%f%f%f", &a,&b,&c);

    if (a>=b+c||b>=a+c||c>=b+c) printf("\nDay KHONG phai la tam giac");
    else if (a==b==c) printf("\nDay la tam giac DEU");
    else if (a==b!=c||b==c!=a||c==a!=b) printf("\nDay la tam giac CAN");
    else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) printf("\nDay la tam giac VUONG");
    else printf("\nDay la tam giac THUONG");

}