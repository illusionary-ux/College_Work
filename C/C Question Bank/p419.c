#include <stdio.h>

int main(void)
{
	int ss[100], i, j, m, aa;

	printf("Input: ");
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &ss[i]);
		if (ss[i] == -888)
		{
			break;
		}
	}
	m = i;
	for (i = 0; i < m - 1; i++)
	{
		for (j = 0; j < m - i - 1; j++)
		{
			if (ss[j] > ss[j+1])
			{
				aa = ss[j];
				ss[j] = ss[j+1];
				ss[j+1] = aa;
			}
		}
	}
	printf("\nResult: ");
	for (i = 0; i < m; i++)
	{
		printf("%d ", ss[i]);
	}
	return 0;
}