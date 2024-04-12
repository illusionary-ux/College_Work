/*
程序的功能：
从键盘上输入5个字符串(约定：每个字符串中字符数≤80字节)，对其进行升序排序并输出。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5][80], tmp[80];
	int i, j;

	/* 输入5个字符串存放到二维数组str中，每行存放一个字符串 */
	printf("Input 5 strings:\n");
	for (i=0; i<5; i++)
	{
		gets(str[i]);
	}

	/* 使用气泡法对5个字符串按从小到大排序 */
	for (j=0; j<4; j++)
	{
		for (i=0; i<4-j; i++)
		{
			if (strcmp(str[i], str[i + 1]) > 0)
			{
				strcpy(tmp, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], tmp);
			}
		}
	}

	/* 输出已排序的5个字符串 */
	printf("---------------------------\n");
	for (i=0; i<5; i++)
	{
		puts(str[i]);
	}

	return 0;
}