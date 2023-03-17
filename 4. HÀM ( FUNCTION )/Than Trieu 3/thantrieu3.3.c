/*Nhập số dương h sau đó in ra tam giác vuông góc trái dưới có chiều cao h bằng các dấu *
ví dụ : h = 4 
        *
        *   *
        *   *   *
        *   *   *   *
*/

/*ý tưởng: dùng vòng lặp lồng nhau. Dòng 1 có 1 dấu *, vòng 2 có 2 dấu *,..., dòng h sẽ có h dấu *
*/

#include <stdio.h>

int tamGiacVuong( int h )
{
    for ( int i = 1; i <= h && h >= 1; i++)  //xuống dòng h lần
    {
        for ( int a = 1; a <= i; a++ ) //mỗi dòng in ra số * bằng a
        {
            printf("\t*");
        }
        printf("\n");
    }
}

int main()
{
    int h; 
    printf("\nNhap chieu cao h cua tam giac = "); 
    scanf("%d", &h);
    if ( h > 0 )
    {
        tamGiacVuong(h);
    }
    else printf("\nNhap vao so nguyen duong h !");

}