/*
程序的功能:
	求任意的一个m×m矩阵的周边元素之和，m(2<=m<=20)及矩阵元素从键盘输入。
*/
#include<stdio.h>

int main(void)
{
	int sum = 0, arr[20][20];
	int m, i, j;
	
	/* 输入矩阵阶数m */
	printf("Please input m:");
	scanf("%d", &m);

	/* 从键盘输入m×m矩阵存放到二维数组arr中 */
	printf("Please input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* 求m×m矩阵周边元素之和 */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((0 == i) || (0 == j) || ((m - 1) == i) || ((m - 1) == j)) 
			{
				sum = sum + arr[i][j];
			}
		}
	}

	printf("sum=%d\n", sum);
	
	return 0;
}