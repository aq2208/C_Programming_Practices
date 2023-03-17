//Đề bài: Phân tích một số nguyên nhập từ bàn phím ra thừa số nguyên tố

//ví dụ: 8=2^3 ; 12=2^2*3...

/*Ý tưởng: với số N nhập từ bàn phím, ta sẽ thực hiện chia N cho các số nguyên tố từ [2,N] cho đến khi chỉ còn 
lại kết quả bằng 1. Và với mỗi số nguyên tố đó, đếm số lần mà N chia hết*/

#include <stdio.h>
int main() {
    int N;
    printf("\nNhap so nguyen N = ");
    scanf("%d",&N);
    int snt = 2;
    int so_lan; //Biến đếm số lần lặp lại của phép chia cho 1 snt nhất định 
    for ( ; snt <= N; ++snt ) 
    {
        int so_lan = 0;
        while ( N % snt == 0)
        {
            so_lan++;
            N /= snt;
        }if ( so_lan) 
        {
            if (so_lan > 1) {printf("%d^%d", snt, so_lan);}
            else if (so_lan == 1) {printf("%d", snt);}
            if (N > snt ) {printf("*");}
        }
    }
}
/*ở bài này ko cần xđinh snt vì khi đặt snt = 2 , khi tăng lên ví dụ snt = 4, nếu chia hết cho 4 thì chắc chắn sẽ
chia hết cho 2*/