#include <stdio.h>

int main(void)
{
	int total = 1; //变量total用来存放第i天的桃子数，第n天时剩1个桃子，所以total的初值为1
	int i, n;

	printf("Please input n:");
	scanf("%d", &n); //输入n的值

	/* 计算第i天的桃子数，当i=1时，计算出的total的值即为第一天的桃子数 */
	for (i = n - 1; i >= 1; i--)
	{
		total = 2 * (total + 1);
	}

	printf("total = %d\n", total); //输出第一天的桃子数

	return 0;
}

