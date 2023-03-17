/*Đề bài: Dãy Fibonacci được định nghĩa như sau: F0=0, F1=1, Fn=F(n-1)+F(n-2)
với n >= 2. Hãy viết chương trình tìm số Fibonacci thứ n */

//F2=1, F3=2, F4=3, F5=5,...
#include <stdio.h>
int main()
{
    int n;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d",&n);
    int F = 0, F1 = 1, F0 = 0;
    for ( int i = 2; i <= n; ++i )
    {
        F = F1 + F0; //dùng F1 và F0 để thay thế cho các F(x) khác cao hơn
        //lúc này F sẽ là vị trí sau F1 
        F0 = F1; 
        F1 = F;
        /*sau khi thực hiện phép cộng xong giá trị của F(x) sẽ đc tăng lên vị trí F(x+1) tiếp sau nó (giá trị bé hơn đc tăng lên giá trị lớn hơn tiếp sau nó) */
    }
    printf("\nso Fibonacci thu %d la %d", n, F);
    
    


}