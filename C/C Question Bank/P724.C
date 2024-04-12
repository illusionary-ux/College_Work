/*
程序的功能：
	从键盘输入1～9之间的一个数，根据输入的数，打印下三角乘法口决表。
要求积的输出占3个宽度，且左对齐。
*/

#include <stdio.h>

void multiplicationTable(int n);

int main(void)
{
	int n, i, j; //变量i代表行，变量j代表列

	printf("input a number(1~9):");
	scanf("%d", &n); //输入n的值

	/* 输出下三角乘法口决表*/
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}
