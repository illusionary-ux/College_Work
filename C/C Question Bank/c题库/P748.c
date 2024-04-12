/*
程序的功能：
	从键盘上输入矩阵的阶数n(n<=14), 矩阵中元素的值等于其位置的行数和列数之和的n倍
（行列的值从0开始计数），如n=3时，矩阵为
        0   3   6
        3   6   9
        6   9   12
先输出该矩阵(显示时每个数宽度为4、右对齐)，
然后计算输出sum1和sum2的值：sum1为矩阵中所有不靠边元素之和、sum2为矩阵的一条对角线元素之和。
*/

#include <stdio.h>

int main(void)
{
	int i, j, n, sum1 = 0, sum2 = 0, array[14][14];

	printf("Enter n:");
	scanf("%d", &n);

	/* 给矩阵赋值（该矩阵元素的值等于其位置的行数和列数之和的n倍）*/
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			array[i][j] = n * (i + j);
		}
	}
	/* 输出该矩阵(显示时每个数宽度为4、右对齐) */
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
	/*计算矩阵中所有不靠边元素之和*/
	for (i=1; i<n-1; i++)
	{
		for (j=1; j<n-1; j++)
		{
			sum1 = sum1 + array[i][j];
		}
	} 
	/*计算矩阵的主对角线元素之和*/
	for (i=0; i<n; i++)
	{
		sum2 = sum2 + array[i][i];
	} 
	
	printf("sum1=%d\n", sum1); //输出结果
	printf("sum2=%d\n", sum2); //输出结果

	return 0;
}
