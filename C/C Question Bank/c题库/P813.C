#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
double shulie(int m);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2):");
	scanf("%d", &n);

	/* 本部分代码功能建议：调用用户自定义函数求fn */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	fn = shulie(n);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
double shulie(int m)
{
	double jieguo;

	if (0 == m)
	{
		jieguo = 0;
	}
	else if (1 == m)
	{
		jieguo = 1; 
	}
	else if (2 == m)
	{
		jieguo = 2;
	}
	else
	{
		jieguo = 2 * shulie(m - 1) + shulie(m - 2) * shulie(m - 3);
	}

	return jieguo;
}
