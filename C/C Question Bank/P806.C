#include<stdio.h>

void fun(int rsNum[], int begin, int end, int *Count);

int main(void)
{
	int i, m, n, tmp, num[1000], numCount;

	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	/* 本部分代码功能建议：调用函数fun()完成计算 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	fun(num, m, n, &numCount);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	for (i=0; i<numCount; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');

	return 0;
}

void fun(int rsNum[], int begin, int end, int *Count)
{
	int i, j=0, *numP=rsNum;

	for (i=begin; i<=end; i++)
	{
		if (i/100 == 5 || i/10 % 10 == 5 || i%10 == 5)
		{
			numP[j] = i;
			j++;
		}
	}

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	*Count = j;
	j = 0;
	for (i=0; i<*Count; i++)
	{
		if (numP[i] % 3 == 0)
		{
			numP[j] = numP[i];
			j++;
		}
	}
	*Count = j;
	/* User Code End(考生添加代码结束) */
}
/* Program End(程序到此结束，此后不能添加内容，否则0分) */
