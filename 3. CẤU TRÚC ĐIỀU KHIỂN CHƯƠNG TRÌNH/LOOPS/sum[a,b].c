//Đề bài: tính tổng các số trong đoạn [a,b] trong đó a, b nhập từ bàn phím

#include <stdio.h>
int main()
{
	int a, b, i, sum = 0;
	printf("\nNhap a = "); scanf("%d", &a);
	printf("\nNhap b = "); scanf("%d", &b);

	for (i =a ; i <= b; ++i)
	{
		sum += i;
	}
	printf("\nTong cac so trong doan tu %d den %d la %d", a, b, sum);
}