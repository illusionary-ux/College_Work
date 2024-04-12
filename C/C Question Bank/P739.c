/*
程序的功能：
	从键盘输入年月日日期，计算出该日期是公元记年以来的第几天。
*/

#include <stdio.h>

int main(void)
{
	int  i, year, month, day, days = 0;
	int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &year, &month, &day); //输入日期
	/* 将公元1年到公元year-1年各年的天数相加 */
	for (i=1; i<year; i++)
	{
		if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0))) //i是闰年
		{
			days = days + 366;
		}
		else //i是非闰年
		{
			days = days + 365;
		}
	}
	
	/* 将1月到month-1各月份的天数相加 */
	for (i=1; i<=month-1; i++)
	{
		if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) //year是闰年
		{
			if (i == 2) //i是闰年的2月
			{
				days = days + mon[i] + 1;
			}
			else //i是闰年的非2月
			{
				days = days + mon[i];
			}
		}
		else //year不是闰年
		{
			days = days + mon[i];
		}
	}
	days = days + day; //计算总的天数
	printf("The result is %d.\n", days);

	return 0;
}

