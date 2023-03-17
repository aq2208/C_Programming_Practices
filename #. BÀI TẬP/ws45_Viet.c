#include <stdio.h>

void Reverse();

void divides9();

void sumOfNumbers();

void select1();

void q2a();

void q2b();

void q2c();

int main()
{
    int select;
    char select1;
    char select2;
Input:
    printf("\nEnter a number to the respective problems: ");
    printf("\n[1]. Question 1 ");
    printf("\n[2]. Question 2 ");
    printf("\n[3]. Exit ");
    scanf("%d", &select);
    switch (select)
    {
    // Question 1
    Q1:
    case 1: // a nested switch-case inside each case
        printf("\nQuestion 1: ");
        printf("\n[a]. Find the reverse of an integer ");
        printf("\n[b]. Calculate the sum of all single-numbers of an interger until the output is less than 10 ");
        printf("\n[c]. Find all the numbers that divisible to 9 and sum of all of that numbers");
        printf("\n[B]. Back ");
        printf("\nInput a character for the respective problems: ");
        scanf("%s", &select1);
        switch (select1)
        {
        case 'A':
        case 'a':
            printf("\n[a]. Reverse an integer:");
            Reverse();
            break;
        case 'b':
            printf("\n[b]. Calculate the sum of all single-numbers of an interger until the output is less than 10");
            sumOfNumbers();
            break;
        case 'C':
        case 'c':
            printf("\n[c]. List of the numbers that divisible to 9 and the sum of all of them: ");
            divides9();
            break;
        case 'B':
            goto Input;
            break;
        default:
            printf("\nInvalid value. Please enter again!");
            goto Q1;
            break;
        }
        break;

    // Question 2
    Q2:
    case 2:
        printf("\nQuestion 2: ");
        printf("\n[a]. Print out the alphabet triangle");
        printf("\n[b]. Print out the equilateral triangle");
        printf("\n[c]. Print out the numeral triangle");
        printf("\n[B]. Back");
        printf("\nEnter a respective character for the problems above:  ");
        scanf("%s", &select2);
        switch (select2)
        {
        case 'A':
        case 'a':
            q2a();
            break;
        case 'b':
            q2b();
            break;
        case 'C':
        case 'c':
            q2c();
            break;
        case 'B':
            goto Input;
            break;
        default:
            printf("\nInvalid value. Please enter again!");
            goto Q2;
            break;
        }
        break;

    // Question 3
    case 3:
        return 0;
        break;

    default:
        printf("Invalid input! Please enter a number from 1 to 3!");
        goto Input;
        break;
    }
}

void Reverse()
{
    int x;
    printf("\nInput an integer: ");
    scanf("%d", &x);
    int reverse = 0;
    while (x > 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    printf("The reverse number = %d", reverse);
}

void divides9()
{
    int sum = 0;
    int divide9;
    printf("\n9 is divisible by the numbers (from 9 to 1000):\n ");
    for (int i = 9; i <= 1000; i += 9)
    {
        printf("%d  ", i);
        sum += i;
    }
    printf("\n\nSum of all the numbers that divisible to 9 (from 9 to 1000) = %d", sum);
}

void sumOfNumbers()
{
    int n;
    int sum = 0;
    int lastNum;
    printf("\nInput an integer: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        while (n > 1)
        {
            lastNum = n % 10;
            sum += lastNum;
            n /= 10;
        }
        n = sum;
    }
    printf("\nFinal Sum = %d", sum);
}

void q2a()
{
    int n;
    int character = 65;
    printf("\nInput the height of the triangle: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", character);
            character++;
        }
        printf("\n");
    }
}

void q2b()
{
    int n, i, j;
    int character = 65;
    printf("\nInput the height of the triangle: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            printf("%c ", character);
            character++;
        }
        printf("\n");
    }
}

void q2c()
{
    int n;
    printf("\nInput the height of the triangle: ");
    scanf("%d", &n);
    int i, j, k;
    int arr[28][28];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                arr[i][j] = 1;
                printf(" %3d", arr[i][j]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                printf(" %3d", arr[i][j]);
            }
        }
        printf("\n");
    }
}
