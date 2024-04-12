/*
程序的功能：
	输出n行星号，每行5个星号。
	例如：n=3，应输出：
	*****
	*****
	*****
*/
#include <stdio.h>

int main(void)
{
	int n, i, j;

	printf("please input n: ");
	scanf("%d", &n); //输入n的值

	/* 输出n行星号 */
	for (i=1; i<=n; i++) //变量i用来控制输出第几行星号，例如i=1，则输出第1行
	{
		for (j=1; j<=5; j++) //变量j用来控制输出第i行的第几个星号
		{
			printf("* ");
		}
		printf("\n"); //输出完一行星号后，换行
	}

	return 0;
}
