#include<stdio.h>

int main(void)
{
	int n, num[10], max, xiabiao, i;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	max = num[0];
	xiabiao = 0;
	for (i = 0; i < n; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			xiabiao = i;
		}
	}
	
	printf("%d %d", max, xiabiao);
	return 0;
}
