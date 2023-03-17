// Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N

#include <stdio.h>
int main()
{
    int m, N;
    printf("\nNhap vao so nguyen duong N = "); scanf("%d", &N);

    int sum = 0, i = 0;
    while ( sum < N )
    {
        sum += i;
        i++;
    }
    m = i - 2; /*vì lệnh i++ sau lệnh so sánh sum với N, nên ở những vòng lặp cuối, i sẽ đc cộng lên 2 lần sau đó mới kết thúc vòng lặp (nháp 1 ví dụ cụ thể là hiểu) */
    printf(" m lon nhat bang %d", m);
}