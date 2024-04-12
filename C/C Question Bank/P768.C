#include<stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
#include <string.h>
#include <math.h>

long xtod(char str[], int *pflag); //函数原型声明

/* User Code End(考生添加代码结束) */

int main(void)
{
	int flag;  /* 标志输入数据是否合法，0表示不合法 */
	long int result10;  /* 转换结果 */
	char str[20];

	printf("input a data:");
	gets(str);

	/* User Code Begin(考生可在本行后添加代码，行数不限) */

	result10 = xtod(str, &flag);  //调用函数xtod实现将十六进制数转换为十进制数

	/* User Code End(考生添加代码结束) */
   
	if (0 == flag) 
	{
		printf("\ndata is error.\n"); 
	}
	
	else 
	{
		printf("\nThe result is: %ld\n", result10); 
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */

/* 该函数的功能：判断数组str中存放的字符串是否是十六进制数，如果是，
	则给指针变量pflag所指向的变量flag赋值为1，同时将其转换为十进制整数，
	如果不是，则给指针变量pflag所指向的变量flag赋值为0*/

long xtod(char str[], int *pflag)
{
	int i, n = 0, length;
	long result = 0;

	/* 判断数组str中的字符串是否是一个十六进制字符串 */
	for (i=0; str[i]!='\0'; i++)
	{
		if ((str[i] >= '0') && (str[i] <= '9')) //判断字符是否是数字
		{
			*pflag = 1;
		}
		/* 判断字符是否是a~f或A~F之间的字母 */
		else if (((str[i] >= 'a') && (str[i] <= 'f')) || ((str[i] >= 'A') && (str[i] <= 'F'))) 
		{
			*pflag = 1;
		}
		/*如果字符既不是数字，也不是字母A~F或a~f，那么数组str中的字符串就不是一个十六进制数*/
		else 
		{
			*pflag = 0; //将0赋给指针变量pflag所指向的变量flag
			break;
		}
	}

	
	/* 将十六进制字符串转换成十进制整数 */
	if (*pflag == 1)
	{
		length = strlen(str);
		for (i=length-1; i>=0; i--)
		{
			if ((str[i] >= '0') && (str[i] <= '9'))
			{
				result = result + (long)((str[i] - '0') * pow(16, n));
				n++;
			}
			else if ((str[i] >= 'a') && (str[i] <= 'f')) 
			{
				result = result + (long)((str[i] - 'a' + 10) * pow(16, n));
				n++;
			}
			else if ((str[i] >= 'A') && (str[i] <= 'F'))
			{
				result = result + (long)((str[i] - 'A' + 10) * pow(16, n));
				n++;
			}
		}
	}

	return result; //将变量result中的十进制数作为函数值返回
}
