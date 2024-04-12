#include <stdio.h>

int main(void)
{
	char a1[10], i;

	printf("请输入10个字符：");
	for (i = 0; i < 10; i++)
	{
		scanf("%c", &a1[i]);
	}
	printf("\n加密结果为：");
	for (i = 0; i < 9; i++)
	{
		printf("%d, ", a1[i]);
	}
	printf("%d", a1[9]);
	return 0;
}