//Đề bài: Tìm số đảo ngược của số nguyên n nhập từ bàn phím 
//ví dụ: n = 1234 -> in ra 4321

//Cách 1:
/*Ý tưởng: Lấy số tận cùng của số ra và in ra đầu tiên, sau đó bỏ chữ số tận cùng đó đi khỏi số ban đầu và tiếp tục
lấy chữ số tận cùng của số còn lại rồi in ra, cứ tiếp tục như vậy...*/
#include <stdio.h>
#include <math.h>
int main() 
{
	int n;
	printf("\nNhap so nguyen n = ");
	scanf("%d",&n);
	while (n >=1 )
	{ 
		int last = n % 10;
		if (last >=1 && last <10)
		{	
			printf("%d",last);
			n /= 10;
		}
		else if (last == 0 ) //nếu số tận cùng là 0 thì ko đc in ra, ví dụ: 1000 -> 1
		{
			n /= 10;
		}	
	}
}