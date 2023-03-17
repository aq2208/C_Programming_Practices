/* Tính S(n) = 1^3 + 2^3 + … + n^3*/

#include <stdio.h>
#include <math.h>
int main() 
{
    int n;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d", &n);
    int S = 0;
    for ( int i = 1; i <= n; i++ )
    {
        S = S + pow(i,3);
    }
    printf("\nS(%d) = %d ", n, S);

}