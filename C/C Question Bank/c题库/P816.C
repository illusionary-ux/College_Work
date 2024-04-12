#include <stdio.h>
#include <math.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
int prime(int num);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, n, cnt;

	printf("Input the m,n: ");
	scanf("%d,%d", &m, &n);

	printf("The result:\n");
	for (cnt=0; cnt<n; m++)
	{
		/* 本部分代码功能建议：调用用户自定义函数判断m是否为素数 */	
		/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
		if (1 == prime(m))
		/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
		{
			printf("%d ", m);
			cnt++;
		}
	}
	putchar('\n');

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
int prime(int num)
{
	int i, flag = 1;

	for (i=2; i<=num-1; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}