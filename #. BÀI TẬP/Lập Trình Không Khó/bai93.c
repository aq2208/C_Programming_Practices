//Viết chương trình kiểm tra 1 số có phải là số nguyên tố hay không
//snt là số chỉ chia hết cho 1 và chính nó

#include <stdio.h>
int main()
{
    int N, i, soUoc = 0;
    printf("\nNhap vao so nguyen duong can kiem tra N = ");
    scanf("%d", &N);

    for ( i = 2; i < N; i++)
    {
        if( N % i == 0 )
        {
            soUoc ++;
            continue;
        }
        else continue;
    }
    if ( soUoc == 0 ) printf("\n%d la so nguyen to", N);
    else printf("\n%d Khong phai la so nguyen to", N);
}