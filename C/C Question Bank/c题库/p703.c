#include <stdio.h>

int main(void)
{
	double base = 500, salary; //base为保底薪水，根据题意其初值为500；salary为最终的薪水
	int profit; //profit为利润

	printf("Input profit:");
	scanf("%d", &profit); //输入利润
	
	/* 根据profit的值，计算出salary */
	if (profit <= 1000)
	{
		salary = base;
	}
	else if (profit <= 2000)
	{
		salary = base + profit * 0.1;
	}
	else if (profit <= 5000)
	{
		salary = base + profit * 0.15;
	}
	else if (profit <= 10000)
	{
		salary = base + profit * 0.2;
	}
	else
	{
		salary = base + profit * 0.25;
	}
	
	printf("salary=%.2f\n", salary); //输出salary的值
	
	return 0;
}