#include<stdio.h>

int main(void)
{
	/*int year, month, day, sum = 0, i;
	int data1[12] = {31, 28, 31, 30, 31, 30 , 31, 31, 30, 31, 30, 31};
	int data2[12] = {31, 29, 31, 30, 31, 30 , 31, 31, 30, 31, 30, 31};
	
	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &year, &month, &day);
	for (i = 1; i < year; i++)
	{
		if ((i % 400==0) || (i % 100 != 0 && i % 4 == 0))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	if (((year % 400 == 0) || (year % 100 != 0 && year % 4 ==0)) && month > 2)
	{
		for (i = 0; i < month - 1; i++)
		{
			sum += data2[i];
		}
	}
	else
	{
		for (i = 0; i < month - 1; i++)
		{
			sum += data1[i];
		}
	}
	sum += day;
	printf("\nThe result is %d\n", sum);
	*/
	puts("I LOVE CHINA");
	return 0;
}
