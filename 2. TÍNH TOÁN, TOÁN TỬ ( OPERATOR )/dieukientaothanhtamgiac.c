//De bai: Nhap do dai 3 canh va kiem tra xem do co phai do dai 3 canh cua tam giac ko?
#include <stdio.h>
int main() {
	int ab, bc, ca;
	printf("\nNhap vao do dai canh AB = "); scanf("%d", &ab);
	printf("\nNhap vao do dai canh BC = "); scanf("%d", &bc);
	printf("\nNhap vao do dai canh CA = "); scanf("%d", &ca);

	if ((ab+bc>ca) && (ab+ca>bc) && (bc+ca>ab)) {
		printf("\nDay la ba canh cua 1 tam giac");
	}else {printf("\nDay khong phai la ba canh cua 1 tam giac");}
}