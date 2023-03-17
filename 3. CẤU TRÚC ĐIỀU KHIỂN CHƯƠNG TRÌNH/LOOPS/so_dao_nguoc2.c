//Đề bài: Tìm số đảo ngược của số nguyên n nhập từ bàn phím 
//ví dụ: n = 1234 -> in ra 4321

//Cách 2:
/*Ý tưởng:Giả sử n = 12345. Khi đó ta có thể viết n = 1*10^5 + 2*10^4 + 3*10^3 + 4*10^2 + 5*10^1
Vậy số ngược lại của n = 54321 có thể viết thành 5*10^5 + 4*10^4 + 3*10^3 + 2*10^2 + 1*10^1
->  */

#include <stdio.h>
int main() 
{
	int n, last;
	printf("\nNhap vao so nguyen n = ");
	scanf("%d",&n);
	int reverse = 0; //Biến đại diện cho số đảo ngược của số n 
	while (n > 0 ) 
	{
		last = n % 10;  //tìm số tận cùng của n
		reverse = reverse * 10 + last; //đắp dần lên từ chữ số tận cùng trở ra đến chữ số đầu tiên
		//ví dụ số tận cùng = 1 -> reverse = 0 * 10 + 1 = 1. sau đó cứ tiếp tục x10 lên để có chữ số hàng chục,trăm,..
		n /= 10; //bỏ chữ số tận cùng đi để tiếp tục xét những số còn lại

	}
	printf("\n%d", reverse);
}

