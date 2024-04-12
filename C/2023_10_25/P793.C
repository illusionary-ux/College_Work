#include<stdio.h>

int main(void)
{
	long int num;
	int sum = 0, ys;

	printf("请输入一个数：");
	scanf("%ld", &num);
	printf("\n该数的各位数之逆序为：");
	do
	{
		ys = num % 10;
		sum = sum + ys;
		printf("%d", ys);
		num = num / 10;
	} while (num != 0);
	printf("\n该数的各位数之和为：%d\n", sum);
	return 0;
}