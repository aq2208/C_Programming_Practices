/*Đề bài: Nhập vào 2 số tự nhiên m và n, m < n. Hãy liệt kê các số chính phương trong đoạn
[m,n]. Có bao nhiêu số chính phương trong đoạn đó ?*/

#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, i, test, soSoCP=0;
    printf("\nNhap 2 so tu nhien m =   "); scanf("%d",&m);
    printf("\nNhap 2 so tu nhien n =   "); scanf("%d",&n);
    printf("\nCac so chinh phuong : ");
    for ( i = 1 ; i <= n; ++i)
    {
        test = pow(i,2);
        if ( test >= m && test <= n)
        {
            printf("%d\t",test);
            soSoCP++;
        }
        else continue;
    }
    printf("\nCo %d so chinh phuong trong doan [%d,%d]", soSoCP, m, n);
}