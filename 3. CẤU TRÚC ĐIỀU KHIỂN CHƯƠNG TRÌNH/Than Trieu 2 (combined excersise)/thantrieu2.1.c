//Đề bài: Nhập số tự nhiên n từ bàn phím và in ra các số chẵn nhỏ hơn n và các số lẻ nhỏ hơn n

#include <stdio.h>
int main()
{
	int n;
	printf("\nNhap so tu nhien n = ");
	scanf("%d",&n);
	printf("\nCac so chan nho hon %d la : ", n);
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0) printf("%d\t", i);
		else continue;
	}
	printf("\nCac so le nho hon %d la :  ", n);
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 != 0) printf("%d\t", i);
		else continue;
	}

} 