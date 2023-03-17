//Đề bài: Tính giai thừa với số n : n! . Với n nhập từ bàn phím

//Giai thừa: n! = 1*2*3*4*5*....*n

#include <stdio.h>
int main()
{
	int n,i, mul=1;
	printf("\nNhap n = ");
	scanf("%d",&n);
	for ( i = 1; i <= n; ++i)
	{
		mul *= i;
	}
	printf(" %d! = %d", n, mul);

}


