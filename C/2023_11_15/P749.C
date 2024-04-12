#include<stdio.h>

int main(void)
{
	int num, i, j;
	int arr[5][5];

	printf("Please input an integer: ");
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = num + i + j;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((j + 1) % 5 == 0)
			{
				printf("%4d\n", arr[i][j]);
			}
			else
			{
				printf("%4d ", arr[i][j]);
			}
		}
	}
	return 0;
}