//De bai: Tính tổng các số chẵn trong đoạn [a,b]
#include <stdio.h>
int main() {
  int a, b;
  printf("\nNhap vao so nguyen a = "); scanf("%d", &a);
  printf("\nNhap vao so nguyen b = "); scanf("%d", &b);
  int sum = 0, i;
  for (i = a; i <= b; ++i) {
    if (i % 2 == 0) { sum += i;}
  }  
  printf("\nTong cua cac so chan trong doan [%d,%d] la %d",a,b,sum);
}
