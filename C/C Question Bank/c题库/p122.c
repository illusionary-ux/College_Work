#include <stdio.h>

int main(void)
{
	long a1, a2, a5;
	double a3, a4, a6;

	printf("请输入4个数：");
	scanf("%ld %ld %lf %lf", &a1, &a2, &a3, &a4);
	a5 = a1 % a2;
	a6 = a3 * a5 + a4;
	printf("\n计算结果为：%016.7lf\n", a6);
	return 0;
}