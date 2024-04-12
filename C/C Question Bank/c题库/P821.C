#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
double Pn(int n, int x);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	double Pnx;
	int n, x;
 
	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	/* 本部分代码功能建议：调用用户自定义函数计算Pn(x) */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	Pnx = Pn(n, x);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
double Pn(int n, int x)
{
	double result;

	if (0 == n)
	{
		result = (double)1;
	}
	else if (1 == n)
	{
		result = (double)x;
	}
	else
	{
		result = ((2 * n -1) * x * Pn(n-1, x) - (n - 1) * Pn(n-2, x))/n;
	}

	return result;
}