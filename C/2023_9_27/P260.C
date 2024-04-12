#include<stdio.h>

int main(void)
{
	int num1, num2, num3, emp;

	printf("请输入3个数：");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 < num2)
	{
		emp = num1;
		num1 = num2;
		num2 = emp;
	}
	if (num1 < num3)
	{
		emp = num1;
		num1 = num3;
		num3 = emp;
	}
	if (num2 < num3)
	{
		emp = num2;
		num2 = num3;
		num3 = emp;
	}
	printf("\n这三个数由小到大为: %d   %d   %d\n", num3, num2, num1);
	return 0;
}