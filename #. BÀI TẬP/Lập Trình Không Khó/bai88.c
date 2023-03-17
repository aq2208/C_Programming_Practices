//Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z

#include <stdio.h>
int main()
{
    char kytu;
    for ( kytu = 'A' ; kytu <= 'Z'; kytu++)
    {
        printf("\t %c", kytu);
    }
    
}