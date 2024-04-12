#include <stdio.h>

#define N 20

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
void maxLie(int array[N][N], int hshu, int lshu);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n:");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	/* 本部分代码功能建议：调用用户自定义函数找出每一行上的最大值的列下标并按示例格式要求显示 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	maxLie(juZhen, m, n);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
void maxLie(int array[N][N], int hshu, int lshu)
{
	int i, j, max, maxlie; //变量max用来存放行的最大值，变量maxlie用来存放行最大值的列标

	
	for (i=0; i<hshu; i++)
	{
		max = array[i][0]; //将第i行的第一个元素赋给变量max
		maxlie = 0; //将第i行第一个元素的列标赋给变量maxlie
		/* 查找第i行的最大值及最大值的列标 */
		for (j=1; j<lshu; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				maxlie = j;
			}
		}
		printf("The max value in line %d is %d\n", i, maxlie); //输出第i行最大值及其列标
	}
}