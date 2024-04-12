/*
程序的功能：
   根据输入的n在屏幕上显示对应的以#组成的菱形图案。
*/

#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* 输出菱形的上半部分（共n+1行） */
	for (i = 1; i <= n + 1; i++)  /* 输出前n+1行# */
	{
		for (j = 1; j <= n + 1 - i; j++)  /* 输出第i行时，先输出空格 */
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)  /* 输出第i行的# */
		{
			printf("#");
		}
		printf("\n");
	}
	
	/* 输出菱形的下半部分（共n行） */
	for (i = n; i >= 1; i--)  
	{
		for (j = 1; j <= n + 1 - i; j++)  /* 输出第i行时，先输出空格 */
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)  /* 输出第i行的# */
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;

}