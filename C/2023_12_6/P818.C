#include <stdio.h>

#define N 20

/* userCode(<50字符): 自定义函数之原型声明 */
void findmax(int x[N][N], int m, int n);

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n: ");
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

	findmax(juZhen, m , n);  /* userCode(<50字符): 调用函数找出每一行上的最大值的列下标并按示例格式要求显示 */
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void findmax(int x[N][N], int m, int n)
{
	int i, j, maxlie, max;
	
	for (i = 0; i < m; i++)
	{
		max = x[i][0];
		maxlie = 0;
		for (j = 0; j < n; j++)
		{
			if (x[i][j] > max)
			{
				max = x[i][j];
				maxlie = j;
			}
		}
		printf("The max value in line %d is %d\n", i, maxlie);
	}
}



