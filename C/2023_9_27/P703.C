#include<stdio.h>

int main(void)
{
	int profit;
	double salary;

	printf("Input  profit: ");
	scanf("%d", &profit);
	if (profit <= 1000)
	{
		salary = 500;
	}
	else if (profit <= 2000)
	{
		salary = profit * 0.1 + 500;
	}
	else if (profit <= 5000)
	{
		salary = profit * 0.15 + 500;
	}
	else if (profit <= 10000)
	{
		salary = profit * 0.2 + 500;
	}
	else if (profit > 10000)
	{
		salary = profit * 0.25 + 500;
	}
	printf("\nsalary=%.2lf\n", salary);
	return 0;
}