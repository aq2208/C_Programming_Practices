/* Viết chương trình nhập giá trị x sau tính giá trị của hàm số
f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5 */

#include <stdio.h>
#include <math.h>
int main()
{
    int x, fx;
    printf("\nNhap vao gia tri x = ");
    scanf("%d", &x);

    if ( x >= 5 )
    {
        fx = 2*pow(x, 2) + 5*x + 9;
        printf("\nf(%d) = %d ", x, fx); 
    }
    else 
    {
        fx = -2*pow(x, 2) + 4*x - 9;
        printf("\nf(%d) = %d ", x, fx);
    }
}