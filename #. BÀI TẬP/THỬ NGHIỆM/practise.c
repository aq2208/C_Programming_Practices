#include <stdio.h>

int sum(int a, int b) {
    return a+b;
    
}

int main() {
    int x,y;
    printf("\nNhap x = "); scanf("%d",&x);
    printf("\nNhap y = "); scanf("%d",&y);

    printf("%d",sum(x,y));

}