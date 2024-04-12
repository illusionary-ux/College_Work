#include <stdio.h>

#define MAX 20

/* userCode(<80字符): 自定义函数之原型声明 */
void rotate (int x1[MAX][MAX], int x2[MAX][MAX], int n);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	rotate(arrayA, arrayB, m);  /* userCode(<60字符): 调用函数实现数组内容变换 */
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

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

//二维数组arrayA中的最后一行放到二维数组arrayB的第0列中
//把二维数组arrayA中的第0行放到二维数组arrayB的最后一列中
void rotate (int x1[MAX][MAX], int x2[MAX][MAX], int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			x2[i][j] = x1[i][j];
		}
	}
	
	for (i = 0; i < n; i++)
	{
		x2[i][0] = x1[n - 1][i];
		x2[i][n - 1] = x1[0][i];
	}
}


