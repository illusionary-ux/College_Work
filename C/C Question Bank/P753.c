/*
计算X的Y次方，其中Y为整数（可以是负整数或0），X为实型。
注意，程序中不能使用库函数pow或使用同名的变量、函数、单词 */
#include <stdio.h>

int main(void)
{
	double x, result = 1;
	int y, i;

	printf("Input x, y:");
	scanf("%lf,%d", &x, &y); //输入x和y的值
	
	/* y为正数，计算x的y次方 */
	if (y > 0)
	{
		for (i = 1; i <= y; i++)
		{
			result = result * x;
		}
	}
	/* y为负数，计算x的y次方 */
	else if (y < 0)
	{
		for (i = 1; i <= (-1) * y; i++)
		{
			result = result * x;
		}
		result = 1 / result;
	}
	/* y为零，x的y次方为1 */
	else
	{
		result = 1;
	}

	printf("%f^%d=%f\n", x, y, result); //输出结果

	return 0;
}