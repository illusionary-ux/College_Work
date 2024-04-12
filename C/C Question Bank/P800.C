#include <stdio.h>

void fun(double *sn, int n);

int main(void)
{
	int n;
	double Sum;

	printf("Please input n: ");
	scanf("%d", &n);

	/* 本部分代码功能建议：调用相应的函数计算S */
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	fun(&Sum, n);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f", n, Sum);
	return 0;
}


void fun(double *sn, int n)
{
	int i;
	double Sum=0, jc=1;

	for (i=1; i<=n; i++)
	{
		jc *= i;
		Sum += 1 / jc;
	}

	/* User Code Begin(Limit: lines<=1, lineLen<=30, 考生可在本行后添加代码、最多1行、行长<=30字符) */
	*sn = Sum;
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
}
