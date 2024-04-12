#include <stdio.h>

int main(void)
{
	int a1, a2, a3;
	char b1, b2;
	double c1, c2;

	printf("请输入7个数据(依次为3整数、2字符、2实数): ");
	scanf("%d %d %d %c %c %lf %lf", &a1, &a2, &a3, &b1, &b2, &c1, &c2);
	printf("\n这7个数据倒序为: ");
	printf("7-%.5f 6-%.5f 5-%c 4-%c 3-%d 2-%d 1-%d\n", c2, c1, b2, b1, a3, a2, a1);
	return 0;
}