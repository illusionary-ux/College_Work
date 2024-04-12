#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */
int getInput(char str[]);
void copyStr(char str[], int m, char dst[]);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
int getInput(char str[])
{
	int len, m;
	
	printf("please input a string: ");
	gets(str);
	len = strlen(str);
	while(len == 0)
	{
		printf("\nError Str, please input a string agagin: ");
		gets(str);
		len = strlen(str);
	}
	printf("please input m: ");
	scanf("%d", &m);
	while(m > len || m < 1)
	{
		printf("\nError m, please input m again: ");
		scanf("%d", &m);
	}
	return m;
}

void copyStr(char str[], int m, char dst[])
{
	int i, len1, tot = 0;
	
	len1 = strlen(str);
	for (i = m - 1; i < len1; i++)
	{
		dst[tot++] = str[i];
	}
	dst[tot] = '\0';
}
