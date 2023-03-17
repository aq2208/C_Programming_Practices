//Đề bài: tìm UCLN của 2 số a và b nhập từ bàn phím 

//UCLN (ước chung lớn nhất) là số nguyên dương lớn nhất mà cả 2 số a và b đều chia hết

//Cách tìm UCLN trên giấy:

/* ý tưởng trên các web: đưa a và b về 2 số bằng nhau, khi đó UCLN sẽ chính là 2 số đó, đưa về bằng cách lấy số lớn
hơn trừ số nhỏ hơn cho đến khi 2 số bằng nhau (a -= b;) */ 
  
/* ý tưởng trên các web 2: cũng giống như cách ở trên chỉ khác là thay phép - bằng phép % (a %= b).Mục tiêu là để 
  đưa 1 trong 2 số a hoặc b về bằng 0*/ 

//My idea: chia số lớn hơn cho lần lượt 1, 2, 3,... cho đến khi số bé hơn chia hết cho kết quả đó 

#include <stdio.h>
int main()
{
	int a,b;
	printf("\nNhap vao so nguyen a = "); scanf("%d", &a);
	printf("\nNhap vao so nguyen b = "); scanf("%d", &b);
	int ketqua;
	if (a > b)
	{
		for ( int i = 1; i <= a; ++i )
		{
			if ( a % i == 0)
			{
				ketqua = a/i;
				if (b % ketqua == 0) 
					{
						printf("\nUCLN(%d,%d) = %d", a, b, ketqua);
						break;
					}
			}
			else {continue;}
		}
	}
	else if (a==b) printf("\nUCLN(%d,%d) = %d", a,b,a);
	else if (a == 0 || b==0) /*nếu a hoặc b bằng 0 thì UCLN sẽ bằng số còn lại vì 0 chia hết cho mọi số*/
	{
		if (a ==0) printf("\nUCLN(%d,%d) = %d",a, b, b);
		else printf("\nUCLN(%d,%d) = %d", a,b,a);
		//Hoặc ở đây ko cần dùng if else thì có thể viết UCLN(a,b)=a+b sẽ ngắn gọn hơn
	}
	else 
	{
		for ( int i = 1; i <= b; ++i )
		{
			if ( b % i == 0)
			{
				ketqua = b/i;
				if (a % ketqua == 0) 
					{
						printf("\nUCLN(%d,%d) = %d", a, b, ketqua);
						break;
					}
			}
			else {continue;}
		}
	}	
}
