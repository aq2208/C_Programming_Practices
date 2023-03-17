/*Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000 */

#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    while ( sum <= 10000 )
    {
		sum += i;
		i++;
    }
	n = i-1; //vì có lệnh i++ ở trong vòng lặp nên i sau vòng lặp sẽ bị tăng 1 đơn vị
	printf("so nguyen duong n nho nhat = %d", n); 



    
}