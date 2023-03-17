//Đề bài: In ra màn hình tất cả các số nguyên tố nhỏ hơn 100

/* số nguyên tố là số chỉ chia hết cho 1 và chính nó*/ 

/*Cách kiểm tra số nguyên tố: kiểm tra xem số đó có chia hết cho số nào trong khoảng từ 2 đến căn bậc hai của số
đó ko? nếu ko thì số đó là snt*/ 

/*ý tưởng: số nguyên tố là số chỉ có 2 ước duy nhât là 1 và chính nó, 
-> xem xem trong khoảng từ 2 đến căn bậc hai của số đó có tồn tại số nào là ước của số đó ko? nếu ko thì số đó
là snt. Và cứ tăng dần giá trị cần ktra lên bằng vòng lặp*/

#include <stdio.h>
#include <math.h>
int main() {		
	for ( int num = 1; num < 100; ++num) 
	{
		int so_uoc = 0; /*Biến đếm số ước của num từ 2 đến căn bậc hai của num. biến này phải được đặt ở trong
		vòng lặp ngoài cùng vì nếu biến đặt ở ngoài thì khi thực hiện lệnh so_uoc++ ở dưới gtri của biến sẽ 
		tăng lên 1 và cứ tiếp tục tăng lên như thế. Đặt biến này ở đầu vòng lặp là để reset giá trị về 0 sau 
		mỗi vòng lặp*/ 
		for ( int i = 2; i <= sqrt(num); i++) 
		{
			if (num % i == 0) 
				{so_uoc++;}

		}if (so_uoc == 0 && num >1) {printf("\t%d",num);}
	}
}
