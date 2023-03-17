//Đề bài: Kiểm tra số nhập từ bàn phím xem có phải là số nguyên tố ko?

/* số nguyên tố là số chỉ chia hết cho 1 và chính nó*/ 

/*Cách kiểm tra số nguyên tố: kiểm tra xem số đó có chia hết cho số nào trong khoảng từ 2 đến căn bậc hai của số
đó ko? nếu ko thì số đó là snt*/ 

/*ý tưởng: số nguyên tố là số chỉ có 2 ước duy nhât là 1 và chính nó, 
-> xem xem trong khoảng từ 2 đến căn bậc hai của số đó có tồn tại số nào là ước của số đó ko? nếu ko thì số đó
là snt*/

#include <stdio.h>
#include <math.h>
int main() {
	int a, i = 2; // i = 2 vì nếu i = 1 thì mọi số đều chia hết cho 1 và mệnh đề if trong for luôn đúng
	int so_uoc = 0; //biến này đại diện cho số ước của số đó trong khoảng từ 2 đến căn bậc hai của số đó

	printf("\n Nhap so nguyen can xet tinh nguyen to = ");
	scanf("%d", &a);
	for ( ; i <= sqrt(a); ++i) {
		if ( a % i == 0 ) {
			so_uoc++;
		}
	}if ( so_uoc == 0 && a > 1 ) // 1 khong phai la snt
		{printf("\n%d la so nguyen to ", a);}
	else {printf("\n%d khong phai la so nguyen to ", a);}
}