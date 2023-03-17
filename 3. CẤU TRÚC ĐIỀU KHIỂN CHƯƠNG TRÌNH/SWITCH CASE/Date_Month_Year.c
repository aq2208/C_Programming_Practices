/*Đề bài: Viết chương trình nhập tháng và năm. In ra màn hình số ngày của tháng đó.
chú ý: tháng 2 có 28 ngày nhưng năm nhuận thì tháng 2 có 29 ngày

//Kiểm tra năm nhuận: lấy năm đó chia cho 4 nếu chia hết là năm nhuận

/*ý tưởng: sử dụng switch case đối với các tháng có cùng số ngày. tháng 2 sẽ ở case riêng và sử
dụng thêm if else để kiểm tra năm nhuận và kết luận số ngày của tháng 2*/

#include <stdio.h>
int main()
{
	int nam, thang, ngay;
	Nhap:
	printf("\nNhap thang can kiem tra : "); scanf("%d",&thang);
	printf("\nNhap nam cua thang do : "); scanf("%d",&nam);
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nThang %d nam %d co 31 ngay", thang, nam);
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nThang %d nam %d co 30 ngay", thang, nam);
			break;

		case 2:
			if (nam % 400 == 0 || (nam % 4==0 && nam % 100!= 0)) printf("\nThang 2 nam nhuan co 29 ngay");
			else printf("\nThang 2 nam thuong co 28 ngay");
			break;

		default:
			printf("\nNhap sai, vui long chay lai chuong trinh va nhap lai");		
			break;

	}
}


