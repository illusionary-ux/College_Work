#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=20, 考生可在本行后添加代码、最多1行、行长<=20字符) */
double fac(void);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int i, n;
	double Sum = 0;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		Sum += 1 / fac();
	}

	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n", n, Sum);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
double fac(void)
{
	static int j = 1;
	static double result = 1;

	result = result * j;
	j++;

	return result;
}