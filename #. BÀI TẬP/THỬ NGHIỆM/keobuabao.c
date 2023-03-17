
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input;
    char computer;
    computer = 1+rand()%3;
    if (computer == 1) computer = "keo";
    if (computer == 2) computer = "bua";
    if (computer == 3) computer = "bao";

    printf("%c", computer);