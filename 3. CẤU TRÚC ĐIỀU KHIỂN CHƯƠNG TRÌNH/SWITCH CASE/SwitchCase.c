#include <stdio.h>
int main() {
    int a, b, pheptoan;
    printf("\nNhap vao so nguyen a = "); scanf("%d", &a);
    printf("\nNhap vao so nguyen b = "); scanf("%d", &b);
    printf("\n====MENU====");
    printf("\n1.Cong hai so\n2.Tru hai so\n3.Nhan hai so\n4.Chia hai so");
    printf("\nChon phep toan muon thuc hien : ");
    scanf("%d", &pheptoan);

    switch (pheptoan) 
    {
        case 1: 
            printf("%d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a-b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a * b);
            break;
        case 4:
            printf("%d / %d = %.2f", a, b, ((float)a)/b);
            break;
        default:
            printf("\nKhong hop le");

    }
}
