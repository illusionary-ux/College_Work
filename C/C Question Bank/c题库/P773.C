/*
程序的功能：
	计算两个日期之间的天数。
*/

#include <stdio.h>
#include <math.h>

int Days(int year, int month, int day); //函数Days的原型声明


int main(void)
{
	int sum, year1, month1, day1, year2, month2, day2;
	
	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &year1, &month1, &day1); //输入第一个日期
	printf("to the date (****/**/**):\n");
	scanf("%d/%d/%d", &year2, &month2, &day2); //输入第二个日期

	/* 计算两个日期之间的天数的绝对值 */
	sum = abs(Days(year2, month2, day2) - Days(year1, month1, day1)); 

	printf("sum=%d\n", sum);


	return 0;
}


/*函数的功能：根据给定的年月日计算出该日期是公元记年以来的第几天*/
int Days(int year, int month, int day)
{
	int i, sum = 0;
	int yue[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	
	for (i = 1; i <= year - 1; i++)
	{
		if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
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
		if (2 == i)
		{
			if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			{
				sum = sum + yue[i] + 1;
			}
			else
			{
				sum = sum + yue[i];
			}
		}
		else
		{
			sum = sum + yue[i];
		}
	}
	sum = sum + day;

	return sum;
}