/* 程序的功能：
	根据输入的n在屏幕上显示对应的图案。
*/
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* 输出图形的上半部分（共n行）*/
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (i - 1); j++)   /* 输出第i行第一个@前的空格*/
		{
			printf(" ");
		}
		printf("%c", '@'); /* 输出第i行第一个@*/
		if (i != n) /* 如果当前行不是第n行*/
		{
			for (j = 1; j <= 2 * (n - i) - 1; j++) /* 输出第i行第二个@前的空格*/
			{
				printf(" ");
			}
			printf("%c", '@'); /* 输出第i行第二个@*/
		}
		printf("\n");
	}
	
	/* 输出图形的下半部分（共n-1行）*/
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= (i - 1); j++)
		{
			printf(" ");
		}
		printf("%c", '@');
		for (j = 1; j <= 2 * (n - i) - 1; j++)
		{
			printf(" ");
		}
		printf("%c", '@');
	
		printf("\n");
	}
	
	return 0;
}