#include <stdio.h>

int main(void)
{
	double a1, a4;
	int a2, a3;

	printf("请输入4个数：");
	scanf("%lf %d %d %lf", &a1, &a2, &a3, &a4);
	printf("\n计算结果为：%013.5lf\n", a1 + (a2 % a3 ) * a4);
	return 0;
}