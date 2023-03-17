//Nhập dữ liệu vào mảng và Xuất dữ liệu của mảng ra màn hình

#include <stdio.h>

int a[100], n; //giả sử sức chứa tối đa của mảng a là 100 ptu, còn n là số lượng ptu người dùng sdung
    
int input() //hàm nhập giá trị cho mảng
{
    //nhap gia tri cho mang
    for (int i=0; i<n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int output() //hàm xuất dữ liệu của mảng ra mhinh
{
    for (int i = 0; i < n ; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
    
}

int main()
{
    //nhap vao so luong phan tu cua mang
    printf("\nNhap vao so luong phan tu cua mang = ");
    scanf("%d",&n);

    input();
    output();
}