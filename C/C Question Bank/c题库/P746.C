#include <stdio.h>

int main(void)
{
	int a1[10], i, j, tmp;
	
	printf("please input 10 integer numbers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a1[i]);
	}
	printf("\nthe array before sorted: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a1[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			if (a1[j] > a1[j+1])
			{
				tmp = a1[j];
				a1[j] = a1[j + 1];
				a1[j + 1] = tmp;
			}
		}
	}
	printf("\nthe array after sorted: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\n");
	return 0;
}

