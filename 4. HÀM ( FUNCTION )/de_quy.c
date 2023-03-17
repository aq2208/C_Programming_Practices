// tim so fibonacci bang de quy

#include <stdio.h> 

int Fibo(int n)
{
    if (n == 0 || n == 1) //trường hợp cơ sở, điều kiện để hàm đệ quy dừng lại
        return n;
    else 
        return (Fibo(n-1)+Fibo(n-2)); //chia nhỏ bước này ra bằng cách chia nhỏ gtri tham số
        //máy sẽ tiếp tục chia nhỏ gtri cho đến khi gặp điều kiện dừng là n = 0 hoặc n = 1
}

int main()
{
    int n;
    printf("\nNhap so tu nhien n = ");
    scanf("%d", &n);
    printf("\nSo Fibonacci thu %d = %d", n, Fibo(n));
}










