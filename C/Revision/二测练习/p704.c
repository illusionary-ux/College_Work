#include<stdio.h>

int main(void)
{
	int max, i, j, yzh;
	
	printf("Please input an integer: ");
	scanf("%d", &max);
	
	for (i = 1; i < max; i++)
	{
		yzh = 0;
		for (j = 1; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				yzh += j;
			}
		}
		if (yzh == i)
		{
			printf("%d is a wanshu ", i);
			for (j = 1; j < i - 1; j++)
			{
				if (i % j == 0)
				{
					printf("%d ", j);
				}
			}
			printf("\n");
		}
		
	}
	return 0;
}
