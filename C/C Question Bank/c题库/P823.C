#include <stdio.h>

#define MAX 20

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=80, 考生可在本行后添加代码、最多1行、行长<=80字符) */
void fun(int arrA[MAX][MAX], int arrB[MAX][MAX], int m);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("\nPlease input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	/* 本部分代码功能建议：调用用户自定义函数实现数组内容变换 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	fun(arrayA, arrayB, m);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
void fun(int arrA[MAX][MAX], int arrB[MAX][MAX], int m)
{
	int i, j;

	/* 把二维数组arrayA各元素的值赋给二维数组arrayB的各元素 */
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			arrB[i][j] = arrA[i][j];
		}
	}
	/* 将二维数组arrayA中的最后一行放到二维数组arrayB的第0列中 */
	for (j=0; j<m; j++)
	{
		arrB[j][0] = arrA[m-1][j];
	}
	/* 将二维数组arrayA中的第0行放到二维数组arrayB的最后一列中 */
	for (j=0; j<m; j++)
	{
		arrB[j][m-1] = arrA[0][j];
	}
}