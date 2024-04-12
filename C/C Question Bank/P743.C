/*
程序的功能：
	从键盘输入一行可带空格的字符串(约定：字符数≤127字节)，按逆序输出该字符串。
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	int i, len;

	printf("Input a string: ");
	gets(str); //输入字符串存放到数组str中。注意：使用gets函数可输入带空格的字符串，scanf则不能

	len = strlen(str); //使用strlen函数计算数组str中所存放的字符串的长度，并将该长度赋给变量len

	printf("The result is: ");
	/* 逆序输出数组str中的字符串。注意：len-1是字符串最后一个字符的位置*/
	for (i=len-1; i>=0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}