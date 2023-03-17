#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    for(int i = 0; i<=20; ++i)
    {
        int random = 7+rand()%3;
        printf("%5d", random);
    }

}