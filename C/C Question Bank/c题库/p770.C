#include<stdio.h>
#include <string.h>

int main(void)
{
	char data[50]; //逆序存放转换后的R进制字符串
	int i = 0, pos, num, R, yushu, shu; //变量R中存放基数，例如二进制的基数为2，3进制的基数为3

	printf("input the num, R: ");
	scanf("%d,%d", &num, &R); //从键盘输入待转换的十进制数赋给变量num，输入基数赋给变量R
	
	if (num < 0)
	{
		shu = (-1) * num; //如果num是负数，将其转换成正数
	}
	else
	{
		shu = num; //如果num是正数，不转换
	}
	/* 以下do-while循环的功能：将十进制数转换为R进制 */
	do
	{
		yushu = shu % R; //将shu和R相除，所得余数赋给变量yushu
		
		/* 如果余数大于等于10，则将其转换为对应的字母，例如，10对应A，11对应B*/
		if (yushu >= 10)  
		{
			yushu = yushu - 10;   
			yushu = yushu + 'A';
		}
		/* 如果余数小于10，则将其转换为对应的数字字符，例如，整数0对应字符0*/
		else
		{
			yushu = yushu + '0';
		}

		data[i] = yushu;  //将转换后的余数作为字符存放到字符数组元素data[i]中
		i++; //数组元素下标增加1 
		shu = shu / R ; //将shu和R相除，所得商赋给变量shu
	} while (shu != 0); //该循环直到shu的值为0才结束

	data[i] = '\0'; //添加字符串结束标志

	pos = strlen(data); //计算转换后的R进制字符串的长度
	printf("Result:\n");
	if (num < 0)
	{
		printf("-"); //如果是负数，则先输出一个负号
	}
	/* 逆序输出数组data中的字符*/
	for (i = pos-1; i >= 0; i--)
	{
		putchar(data[i]);
	}
	printf("\n");

	return 0;
}


