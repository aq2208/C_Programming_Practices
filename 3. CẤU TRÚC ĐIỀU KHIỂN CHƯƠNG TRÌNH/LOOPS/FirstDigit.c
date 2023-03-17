//De bai: In ra chu so dau tien cua mot so nguyen nhap tu ban phim (vi du: 12345 => 1)
#include <stdio.h>
int main() {
    int number;
    printf("\nNhap vao so nguyen number = ");
    scanf("%d",&number);
    int last = number;

/* y tuong : lay number chia cho 10 cho den khi con lai ket qua number < 10 thi ket qua  
do se la chu so dau tien cua n*/
    
    //For Loop
    for ( ; last >= 10; ) {
        last /= 10;
    }
    printf("\nChu so dau tien cua %d la : %d", number, last);

    //While Loop
    while (last >= 10) {
        last /= 10;
    }
    printf("\nChu so dau tien cua %d la : %d", number, last);

    //Do...while Loop
    //*  do lenh do...while se thuc hien than ham do truoc nen ta phai kiem tra so do > 10 ko? trc

    do {
        if (last >= 10) {
        last /=10;
        }
    }while ( last >= 10);
    printf("\nChu so dau tien cua %d la : %d", number, last);

    
    


    

}