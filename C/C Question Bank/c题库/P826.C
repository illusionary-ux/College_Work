#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */
int getInput(char String[]);
void copyStr(char String[], int m, char dst[]);

/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '\0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
int getInput(char String[])
{
	int len, m;
	
	printf("please input a string: ");
	gets(String); //输入一个字符串
	len = strlen(String); //计算字符串的长度，并将该长度赋给变量len
	/*若数组String中的字符串长度为0，则报错并重新读取，直到符合要求为止*/
	while (0 == len)
	{
		printf("\nError Str, please input a string agagin: ");
		gets(String);
		len = strlen(String);
	}
	printf("please input m: ");
	scanf("%d", &m); //从键盘输入m
	/* 若m小于1或m大于数组String中字符串的长度，则报错并重新读取，直至符合要求为止*/
	while (m < 1 || m > len)
	{
		printf("\nError m, please input m again: ");
		scanf("%d", &m);
	}

	return m;
}

/* 该函数功能：将数组String中的字符串从第m个字符开始的全部字符复制到dstStr中 */
void copyStr(char String[], int m, char dst[])
{
	int i, j;

	for (i=m-1, j=0; String[i]!='\0'; i++, j++)
	{
		dst[j] = String[i];
	}
	dst[j] = '\0';
}