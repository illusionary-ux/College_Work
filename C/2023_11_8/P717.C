#include<stdio.h>

int main(void)
{
	int num[10], i, flag = 0;

	printf("Input 10 integers: ");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		if (i % 2 == 1 && num[i] % 2 == 1)
		{
			flag++;
		}
	}
	printf("\ncount=%d\n", flag);
	for (i = 0; i <= 9; i++)
	{
		if (i % 2 == 1 && num[i] % 2 == 1)
		{
	
			printf("a[%d]=%d\n", i, num[i]);
		}
	}

	return 0;
}