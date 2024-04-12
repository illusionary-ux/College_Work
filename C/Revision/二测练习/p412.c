#include<stdio.h>

int main(void)
{
	int num[10000], i, j, tem, tot = 0;
	
	printf("Please input numbers: ");
	for (i = 0; i < 10000; i++)
	{
		scanf("%d", &tem);
		if (tem != -222)
		{
			num[i] = tem;
			tot++;
		}
		else
		{
			break;
		}
	}
	
	for (i = 0; i <= tot - 2; i++)
	{
		for (j = i + 1; j <= tot-1; j++)
		{
			if (num[i] > num[j])
			{
				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
	
	printf("\nOutput:\n");
	for (i = 0; i < tot; i++)
	{
		printf("%6d", num[i]);
		if (i < tot-1 && (i + 1) % 6 != 0)
		{
			printf(",");
		}
		if ((i + 1) % 6 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
