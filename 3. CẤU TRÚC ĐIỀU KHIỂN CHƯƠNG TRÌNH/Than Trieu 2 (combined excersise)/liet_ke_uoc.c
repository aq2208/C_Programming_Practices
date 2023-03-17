//Đề bài: Nhập số tự nhiên n rồi liệt kê các ước của nó. Số đó có bao nhiêu ước?

/*my idea: phân tích n ra thừa số ngto, và áp dụng công thức:
   nếu n = a^x * b^y (trong đó a, b là các snt)
   thì số ước của n = (x+1)*(y+1) */

/*nhưng vì ở bài này còn bắt liệt kê các ước ra nên cách như trên sẽ ko hợp lí lắm,
nên cứ thử chia lần lượt n cho 1,2,3,... cho đến khi n bằng 1 thì dừng*/

#include <stdio.h>
int main()
{
    int n, souoc=0;
    printf("\nNhap vao so tu nhien n = ");
    scanf("%d", &n);
    printf("\nCac uoc so cua %d : ", n);
    for ( int i = 1; i <= n; ++i)
    {
        if ( n % i == 0) 
        {    
            printf("%d\t", i);
            ++souoc;
        }    
        else continue;
    }
    printf("\nSo %d co %d uoc", n, souoc );
}