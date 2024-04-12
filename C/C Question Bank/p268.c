#include <stdio.h>

int main(void)
{
	char a1, a2;
	double b1, b2, b3;
	int c1;

	printf("请输入6个数据(依次为2字符、3实数、1整数): ");
	scanf("%c %c %lf %lf %lf %d", &a1, &a2, &b1, &b2, &b3, &c1);
	printf("\n这6个数据倒序为: 6-%d 5-%.5lf 4-%.5lf 3-%.5lf 2-%c 1-%c", c1, b3, b2, b1, a2, a1);
	return 0;
}