/*---------------------------------------------PRF192------------------------------------------------------------------------------------------------------WORKSHOP1-----------------------------------------------------------------------------------------------------SE1746-----------------------------------------------------------------------------------------------------LE DINH VIET---------------------------------------------------*/

/*----------------------------------------KHAI BAO THU VIEN------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main(){

/*-------------------------------THUC HIEN VIET CHUONG TRINH CUA QUESTION 1--------------------------------*/
    //cau a
    printf("\nkich thuoc cua kieu du lieu short la: %d", sizeof(short));
    printf("\nkich thuoc cua kieu du lieu char la: %d", sizeof(char));
    printf("\nkich thuoc cua kieu du lieu int la: %d", sizeof(int));
    printf("\nkich thuoc cua kieu du lieu long la: %d", sizeof(long));
    printf("\nkich thuoc cua kieu du lieu float la: %d", sizeof(float));
    printf("\nkich thuoc cua kieu du lieu double la: %d", sizeof(double));

    //cau b
    char a;
    printf("\n\nNhap vao 1 ki tu bat ky: "); scanf("%c", &a);
    printf("Gia tri ASCII cua ki tu do la: %d", a);


/*-------------------------------THUC HIEN VIET CHUONG TRINH CUA QUESTION 2--------------------------------*/
    //Rectangle
    float chieuDai, chieuRong;
    printf("\n\nNhap vao hai canh cua hinh chu nhat: "); scanf("%f %f", &chieuDai, &chieuRong);
    printf("\nChu vi cua hinh chu nhat la: %.2f", (chieuDai+chieuRong)*2);
    printf("\nDien tich cua hinh chu nhat la: %.2f", chieuDai*chieuRong);

    //Spare
    float canhHV;
    printf("\n\nNhap vao canh cua hinh vuong: "); scanf("%f", &canhHV);
    printf("\nChu vi cua hinh vuong la: %.2f", canhHV*4);
    printf("\nDien tich cua hinh vuong la: %.2f", canhHV*canhHV);

    //Triangle
    float canh1, canh2, canh3;
    printf("\n\nNhap vao 3 canh cua hinh tam giac: "); scanf("%f %f %f", &canh1, &canh2, &canh3);
    printf("\nChu vi hinh tam giac la: %.2f", canh1+canh2+canh3);
    float p = (canh1+canh2+canh3)/2;
    printf("\nDien tich hinh tam giac la: %.2f", sqrt(p*(p-canh1)*(p-canh2)*(p-canh3)));

    //Circle
    float r;
    printf("\n\nNhap vao ban kinh hinh tron: "); scanf("%f", &r);
    printf("\nChu vi cua hinh tron la: %.2f", M_PI*2*r);
    printf("\nDien tich cua hinh tron la: %.2f", M_PI*r*r); 
    
}
