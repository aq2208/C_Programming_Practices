//Đề bài: Hãy viết chương trình tính tổng các chữ số của 1 số nguyên bất kỳ
//ví dụ: số 48576 có tổng các chữ số là 4+8+5+7+6=30

#include <stdio.h>
int main()
{
    int sum, n, i;
    printf("\nNhap vao so nguyen n = ");
    scanf("%d",&n);

    while( n >= 1)
    {
        int last = n%10;
        sum += last;
        n /= 10;
    }
    printf("\nTong cac chu so cua so tu nhien n la = %d", sum);

}