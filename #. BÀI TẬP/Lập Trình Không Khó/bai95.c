//Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("\nNhap so thuc a = "); scanf("%f", &a);
    printf("\nNhap so thuc b = "); scanf("%f", &b);
    printf("\nNhap so thuc c = "); scanf("%f", &c);

    if ( a < 0 ) a = a*(-1);
    if ( b < 0 ) b = b*(-1);
    if ( c < 0 ) c = c*(-1);

    printf("\nGia tri tuyet doi cua a, b, c lan luot la %.3f, %.3f, %.3f", a, b, c);
}