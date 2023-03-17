#include <stdio.h>
int main(){

    int a;
    printf("\nNhap a = ");
    scanf("%d", &a);
    printf(" a la so %s", (a%2==0)?"chan":"le");
    
}