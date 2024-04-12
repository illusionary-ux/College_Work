#include<stdio.h>
#include<string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
void nixu(char string[]);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	/* 本部分代码功能建议：调用用户自定义函数将字符串str逆序存放 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	nixu(str);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("The result is: %s\n", str);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
void nixu(char string[])
{
	int i, j, tmp;

	for (i=0, j=strlen(string)-1; i<j; i++, j--)
	{
		tmp = string[i];
		string[i] = string[j];
		string[j] = tmp;
	}
}