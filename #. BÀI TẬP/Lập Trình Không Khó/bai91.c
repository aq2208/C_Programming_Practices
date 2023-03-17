//In tất cả các số nguyên dương lẻ nhỏ hơn 100

#include <stdio.h>
int main()
{
    int i = 0;
    while ( i < 100 )
    {
        if ( i % 2 != 0 )
        {
            printf("\t %d", i);
            i++;
        }
        else i++;
    }
}