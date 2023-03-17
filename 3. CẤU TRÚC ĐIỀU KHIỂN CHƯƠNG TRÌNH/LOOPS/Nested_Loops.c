#include <stdio.h>
int main() {
	int i, j , count = 0;
	for (i = 0; i < 3; ++i) {
		for (j=0; j<3; j++) {
			printf("\t%d", count++); //count++ la de in ra count truoc sau moi thuc hien phep ++
			//nhu vay khi in ra thi gia tri se la count va sau do moi tang count len 1 don vi
		}printf("\n\n");
	}
}
/*với vòng lặp lồng nhau, chương trình sẽ thực hiện vòng lặp ở trong trước, đến khi thực hiện xong vòng lặp  
 trong mới ra thực hiện tiếp vòng lặp ở ngoài 