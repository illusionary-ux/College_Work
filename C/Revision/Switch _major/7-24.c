#include<stdio.h>

int main(void)
{
	int num1[10], num2[10], i, n;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num1[i]);
	}
	for(i = 0; i < n - 1; i++)
	{
		num2[i] = num1[i + 1] - num1[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", num2[i]);
		if ((i + 1) % 3 == 0 && i < n - 2)
		{
			printf("\n");
		}
		if ((i % 3 == 0 || (i - 1) % 3 == 0) && (i != n - 2))
		{
			printf(" ");
		}
	}
	return 0;
}
