//Đề bài: Nhập số tự nhiên n rồi tính tổng : S = 1 + 1/2 + 1/3 +...+ 1/n

/* ý tưởng: dùng vòng lặp để tính theo biểu thức*/

#include <stdio.h>
int main()
{
    int n, i=1;
    float S =0;
    printf("\nNhap so nguyen n = ");
    scanf("%d",&n);
    while ( i <= n)
    {
        S += (1.0/i); /* ở đây phải là 1.0 ko đc 1 vì phép chia này sẽ cho kết quả số thập phân nên phải ép kiểu cho 
        nó sang kiểu float ko thì nếu vẫn ở kiểu int kết quả của phép 1/2 sẽ bằng 0*/
        ++i;
    }
    printf("\nTong cua day la %.2f",S);

}