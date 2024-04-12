#include <stdio.h>
#include <string.h>

/* myswap完成字符串str内容的反转，返回字符串str的地址 */
char *myswap(char *str);
/* merge完成字符串strA,strB顺序交叉合并至strC，返回字符串strC的地址 */
char *merge(char *strA, char *strB, char *strC); 

int main(void)
{
	char s1[100], s2[100], s3[200];

	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);

	printf("\nstring s1 reversed: %s", myswap(s1));
	printf("\nstring s2 reversed: %s", myswap(s2));
	printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
char *myswap(char *str)
{
	int i, len;
	char tem[100];
	
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		tem[i] = *(str + len - 1 - i);
	}
	for (i = 0; i < len; i++)
	{
		*(str + i) = tem[i];
	}
	*(str + i) = '\0';
	return str;
}

char *merge(char *strA, char *strB, char *strC)
{
	int len1 = 0, len2 = 0, i, j;
	
	for (i = 0; *(strA + i) != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; *(strB + i) != '\0'; i++)
	{
		len2++;
	}
	for (i = 0, j = 0; *(strA + i) != '\0' && *(strB + i) != '\0'; i++, j += 2)
	{
		*(strC + j) = *(strA + i);
		*(strC + j + 1) = *(strB + i);
	}
	if (len1 > len2)
	{
		for (; i < len1; i++, j++)
		{
			*(strC + j) = *(strA + i);
		}
		*(strC + j) = '\0';
	}
	else
	{
		for (; i < len2; i++, j++)
		{
			*(strC + j) = *(strB + i);
		}
		*(strC + j) = '\0';
	}
	return strC;
}
