#include <stdio.h>

int main()
{
	float diemToan, diemVan, diemAnh;
	printf("\nNhap vao diem mon Van cua ban : "); scanf("%f", &diemVan);
	printf("\nNhap vao diem mon Toan cua ban : "); scanf("%f", &diemToan);
	printf("\nNhap vao diem mon Tieng Anh cua ban : "); scanf("%f", &diemAnh);

	float diemTB;
	diemTB = ( diemToan + diemVan + diemAnh)/3;
	printf("\nDiem trung binh cua ban la: %.1f", diemTB);
	if (diemTB<4.0) {
		printf("\nBan la hoc sinh Yeu");
	}
	else if (diemTB<6.5) {
		printf("\nBan la hoc sinh Trung Binh");
	}
	else if (diemTB<8) {
		printf("\nBan la hoc sinh Kha");
	}
	else {printf("\nBan la hoc sinh gioi");}
}

