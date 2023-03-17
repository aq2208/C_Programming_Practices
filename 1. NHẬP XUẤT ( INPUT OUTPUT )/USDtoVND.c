#include <stdio.h>
int main()
{
	float usd, vnd;
	printf("\nNhap so USD = ");
	scanf("%f", &usd);
	vnd = usd * 22.832;
	printf(" %.0f USD = %.0fk VND", usd, vnd);
	return 0;
	
}
