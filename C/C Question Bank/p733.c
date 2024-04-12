#include <stdio.h>

int main(void)
{
	char ch; //定义变量

	printf("Input a character: "); //在屏幕上输出提示语句
	ch = getchar(); //从键盘输入一个字符赋给变量ch

	printf("\nAscii('%c') = 0x%x\n", ch, ch); //输出字符和十六进制ASCII码

	return 0;
}