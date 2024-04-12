/*
程序的功能：
求任意的一个m×m矩阵的最大数及其所在的行列数，m(2<=m<=20)及矩阵元素从键盘输入(只考虑int型)。
*/
#include <stdio.h>

int main(void)
{
	int arr[20][20];
	int i, j, m, max, maxi, maxj;

	/* 输入矩阵的阶数m */
	printf("Please input m:");  
	scanf("%d", &m);

	/* 从键盘输入m*m个整数，存放到二维数组arr中 */
	printf("Please input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* 将二维数组arr的第一个元素arr[0][0]赋给max作为初始的最大值，行标0和列标0赋给maxi、maxj作为初始
		最大值的行标和列标*/
	max = arr[0][0];
	maxi = 0;
	maxj = 0;
	
	/* 求矩阵的最大值 */
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("max=%d, i=%d, j=%d\n", max, maxi, maxj);

	return 0;
}