#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
long int hanshu(int num);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number:");
	scanf("%d", &n);

	/* 本部分代码功能建议：调用用户自定义函数计算f(n) */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	Fn = hanshu(n);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
long int hanshu(int x)
{
	long int y;

	if (x > 1)
	{
		y = 2 * hanshu(x / 2) + x;  
	}
	else if (x == 1)
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	
	return y;
}