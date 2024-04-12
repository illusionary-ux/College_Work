#include<stdio.h>

int main(void)
{
	int m ,n, i, j, sum, flag = 0;
	
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			flag = 1;
			printf("%d its factors are 1", i);
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					printf(",%d", j);
				}
			}
			printf("\n");
		}
	}
	if (flag == 0)
	{
		printf("Not Found!");
	}
	return 0;
}
