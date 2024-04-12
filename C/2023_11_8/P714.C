#include<stdio.h>

int main(void)
{
	int num[10], i,zhen = 0, fu = 0, sum = 0;

	printf("Input 10 integers: ");
	for (i = 0; i <= 8; i++)
	{
		scanf("%d ", &num[i]);
	}
	scanf("%d", &num[9]);
	for (i = 0; i <= 9; i++)
	{
		sum += num[i];
		if (num[i] < 0)
		{
			fu += num[i];
		}
		if (num[i] > 0)
		{
			zhen += num[i];
		}
	}
	printf("\nzhengshu=%d,fushu=%d,all=%d", zhen, fu, sum);
	return 0;
}