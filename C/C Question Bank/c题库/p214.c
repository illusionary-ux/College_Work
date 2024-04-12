/*
程序的功能：
  根据输入的n在屏幕上显示对应的图案
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
		printf("%c", '$');
		
		/* 如果当前输出的不是第n行，则先输出第i行的空格，再输出第i行上的第二个$ */
		if (i != n)
		{
			for (j = 1; j <= n-1-i; j++)
			{
				printf(" ");
			}
			printf("%c", '$');
		}
		printf("\n");
	}
	
	/* 输出图形的下半部分（共n-1行）*/
	for (i = n - 1; i >= 1; i--)
	{
		printf("%c", '$');
		for (j = 1; j <= n - 1 - i; j++)
		{
			printf(" ");
		}
		printf("%c", '$');
	
		printf("\n");
	}

	return 0;
}