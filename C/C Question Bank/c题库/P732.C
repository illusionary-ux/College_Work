/*
程序的功能：
	输入3行3列的矩阵，输出所有元素的累加和。
*/
#include <stdio.h>

int main(void)
{
	int i, j, sum = 0, arr[3][3];

	/* 从键盘输入3行3列的矩阵，并将该矩阵存放在数组arr中 */
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	/* 将矩阵所有元素相加，累加和存放在变量sum中 */
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	
	printf("sum=%d\n", sum); //输出累加和sum

	return 0;
}