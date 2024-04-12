#include <stdio.h>

int main(void)
{
	int i, year, month, day, sum = 0, yue[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Please input: year-month-day\n");
	scanf("%d-%d-%d", &year, &month, &day); //输入年月日

	/* 计算某月是该年的第几天，例如，2005年6月15日，则应先计算1~5月的天数之和 */
	for (i = 1; i <= month - 1; i++)
	{
		if (2 == i) /* 判断是否是二月份 */
		{
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))/* 判断year是否闰年 */
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
	
	sum = sum + day; //月的天数加上日的天数就是该年的第几天
	printf("It is the %dth day.\n", sum); //输出指定的年月日是该年的第几天

	return 0;
}
