#include<stdio.h>

int main(void)
{
	int num, i1, i2;

	printf("input a number(1~9): ");
	scanf("%d", &num);
	for (i1 = 1; i1 <= num; i1++)
	{
		for (i2 = 1; i2 <= i1; i2++)
		{
			printf("%d*%d=%-3d", i1, i2, i1 * i2);
		}
		printf("\n");
	}
	return 0;
}