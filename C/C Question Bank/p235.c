#include <stdio.h>

int main(void)
{
	int a1[20][20], i, j, m1, sum = 0;
	
	printf("Please input m: ");
	scanf("%d", &m1);
	printf("Please input array:\n");
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			if (j == 0 || j == m1 - 1)
			{
				sum = sum + a1[i][j];
			}
		}
	}
	printf("\nSum=%d\n", sum);
	return 0;
}