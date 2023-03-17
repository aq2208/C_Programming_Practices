//De bai: Kiem tra so nhap tu ban phim xem co phai la so nguyen to ko?
/* so nguyen to la so chi chia het cho 1 va chinh no; 
hoac so nguyen to la so khong chia het cho so nao tu 2 den can bac 2 cua no*/ 
#include <stdio.h>
#include <math.h>
int main() {
	int snt;
	printf("\nNhap so can kiem tra : ");
	scanf ("%d", &snt);
	int i = 2;
	int so_du;
	int test = 1; //Bien Kiem Tra, va gia su bien kiem tra dang dung, tuc la gia su so nay dung la snt
	while ( i <= sqrt(snt) ) {
		so_du = snt % i;
		if ( so_du != 0) {++i;}
		else {
			test = 0;
			break;}
	}
	if (test) {printf("\nDay la so nguyen to ");}
	else {printf("\nDay khong phai la so nguyen to ");}
}