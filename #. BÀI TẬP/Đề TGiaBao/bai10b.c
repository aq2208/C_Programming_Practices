//Đề bài: Viết chương trình tính tổng dãy số sau : S = 1 + 1/2 + 1/3 + ... + 1/n
//??????
#include <stdio.h>

int main()
{
    int n;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d",&n);
    float S = 0;
    for ( int i = 1; i <= n; ++i )
    {
        S += (1/i);
    }
    printf("\nS = %f", S);
}