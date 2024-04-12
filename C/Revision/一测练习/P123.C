#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	double num4, sum;

	printf("请输入4个数：");
	scanf("%d %d %d %lf", &num1, &num2, &num3, &num4);
	sum = num1 + (num2 % num3) * num4;
	printf("\n计算结果为：%013.5f", sum);
	return 0;
}