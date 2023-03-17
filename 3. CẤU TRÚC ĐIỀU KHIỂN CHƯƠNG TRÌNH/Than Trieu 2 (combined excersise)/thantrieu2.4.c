/* Đề bài: Nhập vào số tự nhiên n rồi tính 
S= tổng các số tự nhiên không lớn hơn n
S1= tổng các số tự nhiên lẻ không lớn hơn n
S2= tổng các số tự nhiên chẵn không lớn hơn n */

#include <stdio.h>
int main()
{
    int n, S = 0, S1 = 0, S2 = 0;
    printf("\nNhap so tu nhien n = ");
    scanf("%d",&n);
    int i = 1;
    
    while ( i<=n ) 
    {
        S += i;
        ++i;
    }
    printf("\nTong cac so tu nhien khong lon hon n = %d",S);
    
    i = 1;
    while ( i<=n ) 
    {        
        if( i%2!=0 )
        {
            S1 += i;
            ++i;
        }
        else ++i;
    }
    printf("\nTong cac so tu nhien Le khong lon hon n = %d",S1);
    
    i = 1;
    while ( i<=n ) 
    {
        if( i%2==0 )
        {
            S2 += i;
            ++i;
        }
        else ++i;
    }
    printf("\nTong cac so tu nhien Chan khong lon hon n = %d",S2);
}
