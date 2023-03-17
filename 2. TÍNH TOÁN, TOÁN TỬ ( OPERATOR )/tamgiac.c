//Đề bài: tính diện tích và chu vi của hình tam giác được tạo từ 3 đỉnh có số đo được nhập từ bàn phím

/*ý tưởng: */

#include <stdio.h>
#include <math.h>
int main() {
	
	int xa, xb, xc, ya, yb, yc;
	Nhap:
	printf("\nNhap vao toa do diem A :  "); scanf("%d%d",&xa, &ya);
	printf("\nNhap vao toa do diem B :  "); scanf("%d%d",&xb, &yb);
	printf("\nNhap vao toa do diem C :  "); scanf("%d%d",&xc, &yc);

	//Tinh do dai canh
	float AB, AC, BC;
	AB = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
	AC = sqrt(pow(xc-xa,2)+pow(yc-ya,2));
	BC = sqrt(pow(xc-xb,2)+pow(yc-yb,2));

	//Kiem tra xem do co phai la tam giac ko
	if (AB+AC>BC && AB+BC>AC && BC+AC>AB)
	{
		goto Tinhtoan;
	}
	else 
	{	
		printf("\nDay khong phai la 1 tam giac. Vui long nhap lai toa do cac diem");
		goto Nhap;

	}		

	Tinhtoan:
	//Chu Vi
	printf("\nChu vi cua tam giac ABC la: %.2f", AB+AC+BC);

	//Dien tich
	int p = (AB+AC+BC)/2;
	float dientich = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	printf("\nDien tich cua tam giac ABC la: %.2f",dientich);

	
}