//Đề bài: In ra màn hình các số chính phương nhỏ hơn số nguyên n được nhập từ bàn phím

/*Số chính phương là số có căn bậc hai là một số nguyên, nói cách khác số chính phương là bình phương của 
một số nguyên khác*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	printf("\nNhap so nguyen n = ");
	scanf("%d",&n);
	for ( i = 1; i < n; ++i)
	{
		int test = pow(i,2);
		if (test < n) printf("%d\t",test);
		else break;
	}

}