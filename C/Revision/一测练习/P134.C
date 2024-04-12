#include<stdio.h>

int main(void)
{
	char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;

	printf("\n请输入10个字符：");
	scanf("%c%c%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10);
	printf("\n加密结果为：%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
	return 0;
}