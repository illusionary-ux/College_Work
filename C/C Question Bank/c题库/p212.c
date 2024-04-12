/* 
程序的功能：
根据输入的n在屏幕上显示对应的图案。 
*/
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	/* 输出菱形的上半部分（共n行）*/
	for (i = 1; i <= n; i++)   
	{
		for (j = 1; j <= n - i; j++) /* 输出第i行的字母前的空格 */
		{
			printf(" ");
		}
		printf("%c", 'a'+(i-1));  /* 输出第i行的第一个字母 */
		
		/* 如果当前行不是第1行，则在第1个字母后输出空格，然后再输出第2个字母 */
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
	}
	
	/* 输出菱形的下半部分（共n-1行）*/
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("%c", 'a' + (i - 1));
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
		
	}

	return 0;
}