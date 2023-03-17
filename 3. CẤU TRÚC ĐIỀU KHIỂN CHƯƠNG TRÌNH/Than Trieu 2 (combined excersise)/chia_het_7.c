//Đề bài: Nhập số tự nhiên n rồi tính tổng các số tự nhiên không lớn hơn n và chia hết cho 7

/*Điều kiện để chia hết cho 7: */

#include <stdio.h>
int main()
{
    int n, S=0, i=1;
    printf("\nNhap so tu nhien n = ");
    scanf("%d",&n);
    while ( i<=n )
    {
        if( i%7 == 0 )
        {
            S += i;
            ++i;
        }
        else ++i;
    }
    printf("\nTong cac so tu nhien khong lon hon n va chia het cho 7 la: %d", S);
    
}