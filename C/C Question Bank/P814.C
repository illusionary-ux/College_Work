#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
int leijia(int shuzu[3][3]);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	/* 本部分代码功能建议：调用用户自定义函数求矩阵所有元素之和 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	sum = leijia(num);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
int leijia(int shuzu[3][3])
{
	int i, j, sum = 0;

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum = sum + shuzu[i][j];
		}
	}
	return sum;
}