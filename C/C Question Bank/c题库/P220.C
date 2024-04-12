/*
程序的功能：
	从键盘读入一行字符(约定：字符数≤127字节)，
	统计及输出其中的字母、数字、空格和
	其他符号的个数。
*/

#include <stdio.h>

int main(void)
{
	char str[128];
	int i, zimu = 0, shuzi = 0, kongge = 0, qita = 0;

	/* 从键盘输入一行字符存放到数组str中 */
	printf("Please input string:");
	gets(str);

	/* 从数组str中将字符逐个取出判断 */
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z')) //判断字符是否是小写字母
		{
			zimu++;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z')) //判断字符是否是大写字母
		{
			zimu++;
		}
		else if ((str[i] >= '0') && (str[i] <= '9')) //判断字符是否是数字字符
		{
			shuzi++;
		}
		else if (str[i] == ' ') //判断字符是否是空格
		{
			kongge++;
		}
		else  //其它字符
		{
			qita++;
		}

	}
	printf("zimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);

	return 0;
}