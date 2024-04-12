/*
程序的功能：
	
	  输入10个整型数存入一维数组，输出值和下标都为奇数(数组第1个元素的下标为0)的元素及其个数。
*/

#include <stdio.h>

int main(void)
{
	int i, count = 0, arr[10];

	/* 输入10个整数存放在数组a中 */
	printf("Input 10 integers.\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	/* 统计值和下标都为奇数的数组元素个数 */
	for (i = 0; i < 10; i++)
	{
		if ((i % 2 != 0) && (arr[i] % 2 != 0)) 
		{
			count++;
		}
	}
	printf("count=%d\n", count); /* 输出值和下标都为奇数的数组元素个数 */
	
	/* 输出值和下标都为奇数的数组元素 */
	for (i = 0; i < 10; i++)
	{
		if ((i % 2 != 0) && (arr[i] % 2 != 0))
		{
			printf("a[%d]=%d\n", i, arr[i]);
		}
	}

	return 0;	
}