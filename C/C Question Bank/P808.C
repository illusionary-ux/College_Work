#include <stdio.h>
#include <string.h>

#define N 128

void conj(char *string1, char *string2);

int main(void)
{
	char str1[N * 2], str2[N];

	printf("Please input string1:");
	gets(str1);
	printf("Please input string2:");
	gets(str2);

	/* 本部分代码功能建议：调用函数conj()完成str1和str2的合并 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	conj(str1, str2);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nstring1:%s\n", str1);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数conj，行数不限) */
void conj(char *string1, char *string2)
{
	int i, j;
	char string3[2 * N];

	/* 以下for循环的作用：将两个字符串等长部分的字符交替存放在数组string3中 */
	for (i = 0, j=0; string1[i] != '\0' && string2[i] != '\0'; i++,j=j+2)
	{
		string3[j] = string1[i];
		string3[j+1] = string2[i];
	}

	if (string1[i] != '\0') //字符串1没有结束，字符串2结束
	{
		for (; string1[i] != '\0'; i++,j++) //将字符串1中剩余的字符复制到数组string3新生成的字符串后
		{
			string3[j] = string1[i];
		} //添加字符串结束标志'\0'
	}
	else if (string2[i] != '\0') //字符串2没有结束，字符串1结束
	{
		for (; string2[i] != '\0'; i++,j++) //将字符串2中剩余的字符复制到数组string3新生成的字符串后
		{
			string3[j] = string2[i];
		} //添加字符串结束标志'\0'
	}
	string3[j] = '\0'; //添加字符串结束标志'\0'

	strcpy(string1, string3); //将新生成的字符串复制到string1中
}