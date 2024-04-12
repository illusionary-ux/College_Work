/*
程序的功能：
	输入两个正整数m和n，求其最大公约数和最小公倍数。
	注：最大公约数也称最大公因子，指某几个整数共有因子中最大的一个；
	两个整数公有的倍数称为它们的公倍数，其中最小的一个正整数称为它们两个的最小公倍数。
*/
#include <stdio.h>

int main(void)
{
	int m, n, i, min, zdgys, zxgbs; //变量zdgys用来存放最大公约数，变量zxgbs用来存放最小公倍数

	printf("please input two integer numbers:");
	scanf("%d%d", &m, &n); //输入两个正整数m和n
	
	/* 将m和n中的最小值赋给变量k */
	if (m > n)
	{
		min = n;
	}
	else
	{
		min = m;
	}
	
	/* 求最大公约数 */
	for (i = min; i >=1; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			zdgys = i;
			break;
		}
	}
	
	zxgbs = m * n / zdgys; //求最小公倍数。该表达式是数学上现成的公式。

	printf("the greatest common  divisor is %d\n", zdgys); //输出最大公约数
	printf("the least common  multiple is %d\n", zxgbs); //输出最小公倍数

	return 0;
}