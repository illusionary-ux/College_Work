#include <stdio.h>

int main(void)
{
	double a1[5], min;
	int i;

	printf("请输入5个实数: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf,", &a1[i]);
	}
	min = a1[0];
	for (i = 0; i < 5; i++)
	{
		if (min > a1[i])
		{
			min = a1[i];
		}
	}
	printf("\n最小的数是 %.2lf\n", min);
	return 0;
}