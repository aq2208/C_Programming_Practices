//phan tich thanh thua so nguyen to 
//tu lam

#include <stdio.h>
int main()
{
    int n, i=2, soLanLapLai;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d",&n);
    while ( i<=n)
    {
        soLanLapLai =0;
        while ( n >=1)
        {
            if(n%i==0)
            {
                soLanLapLai++;
                n /= i;
            }
            else break;
            
        }
        if(soLanLapLai)
        {
            if (soLanLapLai==1) printf("\n%d",i);
            if (soLanLapLai > 1) printf("%d^%d", i, soLanLapLai);
            if (n>i) printf("*");
        }
        i++;
    }

}