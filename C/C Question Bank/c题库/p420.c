#include <stdio.h>

int main(void)
{
	double ss[100], aa;
	int i, j, m;

	printf("Input: ");
	for (i = 0; i < 100; i++)
	{
		scanf("%lf", &ss[i]);
		if (ss[i] == -567)
		{
			break;
		}
	}
	m = i;
	for (i = 0; i < m - 1; i++)
	{
		for (j = 0; j < m - i - 1; j++)
		{
			if (ss[j] < ss[j+1])
			{
				aa = ss[j + 1];
				ss[j + 1] = ss[j];
				ss[j] = aa;
			}
		}
	}
	printf("\nResult: ");
	for (i = 0; i < m; i++)
	{
		printf("%.1f ", ss[i]);
	}
	return 0;
}