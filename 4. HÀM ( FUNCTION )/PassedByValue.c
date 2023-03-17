#include <stdio.h>

void Swap(int a, int b)
{
    int temp = a;
    a=b;
    temp = b;
}

int main()
{
    int x, y;
    printf("\nNHap vao so tu nhien x = "); scanf("%d",&x);
    printf("\nNHap vao so tu nhien y = "); scanf("%d",&y);
    printf("\ngia tri cua x = %d", x);
    printf("\ngia tri cua y = %d", y);
    Swap(x,y);
    printf("\ngia tri cua x = %d", x);
    printf("\ngia tri cua y = %d", y);

}