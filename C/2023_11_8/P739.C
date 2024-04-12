#include<stdio.h>

int main(void)
{
	int year, month, day, i, sum = 0;
	int base[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &year, &month, &day);
	for (i = 1; i <= year - 1; i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
		{
			sum = sum + 366;
		}
		else
		{
			sum = sum + 365;
		}
	}
	for (i = 1; i <= month - 1; i++)
	{
		sum = sum + base[i];
	}
	if (month >= 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) 
	{
		sum += 1;
	}
	sum = sum + day;
	printf("\nThe result is %d\n", sum);
	return 0;
}
