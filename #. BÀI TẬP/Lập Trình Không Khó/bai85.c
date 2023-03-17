/*Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm*/

#include <stdio.h>
int main()
{
    int thang;
    Nhapxuat:
    printf("\nNhap vao thang can kiem tra : ");
    scanf("%d", &thang);
    switch ( thang )
    {
        case 1:
        case 2:
        case 3:
            printf("\nQuy I");
            break;
        case 4:
        case 5:
        case 6:
            printf("\nQuy II");
            break;
        case 7:
        case 8:
        case 9:
            printf("\nQuy III");
            break;
        case 10:
        case 11:
        case 12:
            printf("\nQuy IV");  
            break;
        default: 
            printf("\nKhong hop le. Vui long nhap lai");
            goto Nhapxuat;
            break;
    }
}