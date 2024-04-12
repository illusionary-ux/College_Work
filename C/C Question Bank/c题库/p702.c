#include <stdio.h>

int main(void)
{
	int month;

	printf("please input the month number:");
	scanf("%d", &month); //输入月份

	
	
	if ((month > 12) || (month < 1)) //从键盘输入的月份无效
	{
		printf("\nInvalid month input !\n");
	}
	else //输入的月份有效
	{
		/* 以下if语句的功能：根据month的值判断该月有几天 */	
		if ( 2 == month)
		{
			printf("2003.%d has 28 days\n", month); //因为2003年不是闰年，所以二月份有28天
		}
		else if ((4 == month) || (6 == month) || (9 == month) || (11 == month))
		{
			printf("2003.%d has 30 days\n", month); 
		}	
		else
		{
			printf("2003.%d has 31 days\n", month); 
		}
	}	
	
	return 0;
}