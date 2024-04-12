#include<stdio.h>

int main(void)
{
	int arr[20][20];
	int m, sum = 0, i, j;

	printf("Please input m: ");
	scanf("%d", &m);
	printf("\nPlease input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		sum += arr[0][i];
		sum += arr[m-1][i];
	}
	printf("\nSum = %d\n", sum);
	return 0;
}