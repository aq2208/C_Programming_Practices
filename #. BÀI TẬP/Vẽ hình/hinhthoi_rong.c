/*
 *
 * *
 *   *
 * *
 *
 */
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i <= (n - 1) / 2)
			{
				if (j == (n - 1) / 2 + i || j == (n - 1) / 2 - i)
					printf("*");
				else
					printf(" ");
			}
			else
			{
				int k = n - 1 - i;
				if (j == (n - 1) / 2 + k || j == (n - 1) / 2 - k)
					printf("*");
				else
					printf(" ");
			}
		}
		if (i != n - 1)
			printf("\n");
	}
	printf("\n");
}