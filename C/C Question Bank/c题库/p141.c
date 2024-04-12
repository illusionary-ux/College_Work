#include <stdio.h>

int main(void)
{
	int a1[4], i, max;

	printf("请输入4个整数: ");
	for (i = 0; i <4; i++)
	{
		scanf("%d,", &a1[i]);
	}
	max = a1[0];
	for ( i = 0; i < 4; i++)
	{
		if (max < a1[i])
		{
			max = a1[i];
		}
	}
	printf("\n最大的数是 %d\n", max);
	return 0;
}