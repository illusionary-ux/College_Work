#include<stdio.h>

int main(void)
{
	int num[10], i, n, tem, maxi = 0, mini = 0, max, min;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	min = num[0];
	
	for (i = 0; i < n; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
			mini = i;
		}
	}
	
	tem = num[0];
	num[0] = num[mini];
	num[mini] = tem;
	
	max = num[0];
	for (i = 0; i < n; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			maxi = i;
		}
	}
	tem = num[n - 1];
	num[n - 1] = num[maxi];
	num[maxi] = tem;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", num[i]);
		if (i != n - 1)
		{
			printf(" ");
		}
	}
	return 0;
}
