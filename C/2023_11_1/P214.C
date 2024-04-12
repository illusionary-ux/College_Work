#include<stdio.h>

int main(void)
{
	int num, y, x;

	printf("Please input n: ");
	scanf("%d", &num);
	for (y = 1; y <= 2 * num -1; y++)
	{
		for (x = 1; x <= num; x++)
		{
			if (y == -x + num + 1 || x == 1 || y == x + num - 1)
			{
				printf("$");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}