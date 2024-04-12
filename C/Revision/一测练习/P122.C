#include<stdio.h>

int main(void)
{
	int num1, num2, num4;
	double num3, sum;

	printf("请输入4个数：");
	scanf("%d %d %lf %d", &num1, &num2, &num3, &num4);
	sum = (num1 % num2) * num3 + num4;
	printf("\n计算结果为：%016.7f", sum);
	return 0;
}