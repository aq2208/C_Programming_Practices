//Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N

#include <stdio.h>
int main()
{
    int N, i, sum=0;
    printf("\nNhap vao so nguyen duong N = ");
    scanf("%d", &N);
    for ( i = 0; i < N; i++ )
    {
        if ( i % 2 != 0 ) sum += i;
        else continue;
    }
    printf("SUM = %d", sum);
}