//Đề bài: tìm BCNN của hai số a và b được nhập từ bàn phím

/*BCNN (bội chung nhỏ nhất) là số nguyên dương nhỏ nhất chia hết cho cả a và b. Nếu a hoặc b bằng 0 thì
BCNN(a,b) = 0*/ 

/*phương pháp tìm BCNN 1: phân tích 2 số ra thừa số nguyên tố, sau đó lấy những thừa số trùng nhau của
cả 2 số (lấy với lũy thừa lớn nhất của thừa số ngto đó ). BCNN sẽ là tích của những thừa số ngto đó với nhau 
!!!Cách này mình đánh giá chỉ thuận tiện cho tính toán trên giấy, việc thực hiện code phức tạp hơn và tốc độ
 cũng không quá tốt.*/

/*phương pháp 2: nhân 1 số cho lần lượt 1, 2, 3,... đến khi nào kết quả chia hết cho số kia thì kết quả đó
là BCNN*/

#include <stdio.h>
int main()
{
	int a,b;
	printf("\nNhap so nguyen a = "); scanf("%d",&a);
	printf("\nNhap so nguyen b = "); scanf("%d",&b);
	int ketqua;
	if (a ==0 || b ==0) printf("\nBoi chung nho nhat cua %d va %d la 0", a, b);
	if (a>b)
	{	
		for ( int i = 1; i <= a ; ++i)
		{
			ketqua = a * i;
			if (ketqua % b ==0)
				{break;}
		}
		printf("\nBoi chung nho nhat cua %d va %d la %d", a, b, ketqua);
	}
	else if (a==b) printf("\nBoi chung nho nhat cua %d va %d la %d", a, b, a);
	else 
	{
		for ( int i = 1; i <= b ; ++i)
		{
			ketqua = b * i;
			if (ketqua % a ==0)
				{break;}
		}
		printf("\nBoi chung nho nhat cua %d va %d la %d", a, b, ketqua);
	}	
	
}