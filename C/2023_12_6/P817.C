#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void nixu(char x[], int len);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	nixu(str, strlen(str));  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void nixu(char x[], int len)
{
	char tem[128];
	int i;
	
	for (i = 0; i <= len; i++)
	{
		tem[i] = x[len - i - 1];
	}
	strcpy(x, tem);
}
