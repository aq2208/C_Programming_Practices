/*Đề bài: Nhập số nguyên dương h và sau đó in ra tam giác cần bằng các dấu * với chiều cao bằng h
ví dụ h = 5
                                    *
                                *   *   *
                            *   *   *   *   *
                        *   *   *   *   *   *   *
                    *   *   *   *   *   *   *   *   *

*/

#include <stdio.h>

void tamGiacCan( int h )
{
    for ( int i = 1; i <=h ; i++) //so lan xuong dong //todo
    {
        for (int a = 1; a <= i ; ) //so * moi dong //todo
        {
            printf("\t*");
        }
        printf("\n");
    }
}
int main()
{
    int h;
    printf("\nNhap vao chieu cao cua hinh tam giac h = ");
    scanf("%d", &h);
    if (h > 0 )
    {
        tamGiacCan(h);
    }
    else printf("\nNHap vao so nguyen duong h !");
}