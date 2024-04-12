#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[128], qq;
	int i, j, a2[10] = {0}, m;

	printf("请输入一行字符：");
	gets(a1);
	m = strlen(a1);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a1[i] == '0' + j)
			{
				a2[j]++;
			}
		}
	}
	printf("统计结果为：\n");
	for (j = 0; j < 10; j++)
	{
		if (a2[j] != 0)
		{
			qq = '0' + j;
			printf("%c-%d\n", qq, a2[j]);
		}
	}
	return 0;
}