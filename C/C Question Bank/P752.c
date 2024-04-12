/*
程序的功能：
	键盘输入m,n（约定：m和n均≤1000且为正整数），
输出介于m和n（含m和n）中能被3整除且至少有位数字是5的所有整数。
*/
#include <stdio.h>

int main(void)
{
	int i, m, n, ge, shi, bai, tmp;

	printf("Input m, n:");
	scanf("%d,%d", &m, &n); //输入m和n的值
	/* 如果m大于n，交换二者的值 */
	if (m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	/* 输出介于m和n（含m和n）中能被3整除且至少有位数字是5的所有整数 */
	for (i = m; i <= n; i++)
	{
		/* 判断i能否被3整除 */
		if (i % 3 == 0)
		{
			ge = i % 10; //该表达式计算出i的个位数字，并将该数字赋给变量ge
			shi = i / 10 % 10; //该表达式计算出i的十位数字，并将该数字赋给变量shi
			bai = i / 100; //该表达式计算出i的百位数字，并将该数字赋给变量bai
		
			/* 判断变量ge、shi或bai的值是否为5 */
			if ((ge == 5) || (shi == 5) || (bai == 5))
			{
				printf("%d ", i); //输出满足题意的i值
			}
		}
	}

	return 0;
}
		
		
		
		
