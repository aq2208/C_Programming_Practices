#include <stdio.h>

int Swap(int x, int y)
{
    int temp = x;
    x=y;
    y = temp;
    return x,y;
}

int main()
{
    int x, y;
    printf("\nNHap vao so tu nhien x = "); scanf("%d",&x);
    printf("\nNHap vao so tu nhien y = "); scanf("%d",&y);
    Swap(x,y);     
    printf("\ngia tri cua x = %d", x);
    printf("\ngia tri cua y = %d", y);

}
