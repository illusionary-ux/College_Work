#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void deleteother(char *p);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void deleteother(char *p)
{
	int i, len, tot = 0;
	
	for (i = 0; *(p + i) != '\0'; i++)
	{
		;
	}
	len = i;
	for (i = 0; i < len; i++)
	{
		if ((*(p + i) >='a' && *(p + i) <='z') || (*(p + i) >='A' && *(p + i) <='Z'))
		{
			*(p + tot) = *(p + i);
			tot++;
		}
	}
	*(p + tot) = '\0';
}

