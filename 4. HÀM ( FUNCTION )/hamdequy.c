//tinh tổng các số từ 1 đến n sử dụng hàm đệ quy

#include <stdio.h>

int sum(int n)
{
	if (n == 1 || n == 0)
		return n;
	else return n + sum(n-1); 
}

int main()
{
	int n, tong;
	do 
	{
		printf("\nNhap vao so nguyen duong n = ");
		scanf("%d", &n);
	}while ( n<0 );
	tong = sum(n);
	printf("Tong cac so tu 1 den %d = %d", n, tong);	
}