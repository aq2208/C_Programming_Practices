#include <stdio.h>

int main()
{
	int a;
	printf("Nhap so tuoi cua ban: ");
	scanf("%d", &a);
	
	if (a > 60)
		printf("\nBan la nguoi gia");
	else if (a > 40 )
		printf("\nBan thuoc do tuoi trung nien");
	else if (a > 18)
		printf("\nBan la thanh thieu nien");
	else {
		if (a <= 2) {printf("\nBan la baby");}
		else if (a <= 5) {printf("\nBan dang di hoc mau giao");}
		else if (a <= 10) {printf("\nBan dang hoc tieu hoc");}
		else if (a <= 18) {printf("\nBan dang hoc trung hoc");}
	} 
return 0;		

	
}

