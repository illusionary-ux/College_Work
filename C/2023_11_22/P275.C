#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	int num[10] = { 0 }, i, tot;

	printf("请输入一行字符：");
	fgets(str, 128, stdin);
	tot = strlen(str);
	for (i = 0; i < tot; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num[str[i] - '0']++;
		}
	}
	printf("统计结果为：\n");
	for (i = 0; i < 10; i++)
	{
		if (num[i] != 0)
		{
			printf("%d-%d\n", i, num[i]);
		}
	}
	return 0;
}