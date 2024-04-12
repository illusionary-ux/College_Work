#include<stdio.h>

int main(void)
{
	int limit, i, j, sum;

	printf("Please input an integer: ");
	scanf("%d", &limit);
	for (i = 1; i <= limit; i++)
	{
		sum = 0;
		for (j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			printf("%6d is a wanshu ", i);
			for (j = 1; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					printf(" %d", j);
				}
			}
			printf("\n");
		}
	}

	return 0;
}