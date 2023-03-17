/* 2 CÂU LỆNH NHẬP VÀ XUẤT CHÍNH TRONG CHƯƠNG TRÌNH C LÀ PRINTF() DÙNG ĐỂ XUẤT DỮ LIỆU RA 
MÀN HÌNH VÀ SCANF() DÙNG ĐỂ NHẬP DỮ LIỆU VÀO TỪ BÀN PHÍM*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("\nNhap vao so nguyen a = "); //In ra phần trong dấu " "
    scanf("%d",&a); //Người dùng sẽ đc nhập vào số nguyên a
    printf("\nNhap vao so nguyen b = ");
    scanf("%d",&b);

    printf("\nSo nguyen a = %d", a); // In ra gtri cua a 
    printf("\nSo nguyen b = %d", b); // In ra gtri cua b
}