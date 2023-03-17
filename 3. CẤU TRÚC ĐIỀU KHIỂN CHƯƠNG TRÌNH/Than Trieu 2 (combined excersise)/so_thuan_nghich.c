/*Một số được gọi là số thuận nghịch khi đọc từ trái sang phải hay từ phải sang trái 
số đó ta vẫn nhận được số giống nhau, ví dụ 23432. Hãy viết chương trình nhập 1 số tự
nhiên từ bàn phím và kiểm tra xem số đó có phải là số thuận nghịch không?*/

#include <stdio.h>
int main() {
    int n, last, i, reverse;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d",&n);
    i = n; //gán n cho biến i vì sau khi tính toán gtri n sẽ bị biến đổi mất 
    while ( n >= 1)
    {
        last = n % 10;
        reverse = reverse * 10 + last;
        n /= 10;
    }
    if ( reverse == i && i >= 0 ) printf("\n%d la so thuan nghich", i);
    else printf("\n%d khong phai la so thuan nghich", i);
    
    
    
}