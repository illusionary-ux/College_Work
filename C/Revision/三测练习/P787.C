#include<stdio.h>

#define MAXLINE 80

/* userCode(<80字符): 自定义函数之原型声明 */
char *strLianjie(char str1[], char str2[]) ;

int main(void)
{
	char str[2][MAXLINE+1], strall[2*MAXLINE+1]="", *pNew;

	printf("input 2 strings:\n");
	gets(str[0]);
	gets(str[1]);

	pNew = strLianjie(strLianjie(strall, str[0]), str[1]);
	printf("\nResult: %s\n", pNew);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
char *strLianjie(char str1[], char str2[]) 
{
	int i;
	static int j = 0;
	
	for (i = 0; str2[i] != '\0'; i++, j++)
	{
		str1[j] = str2[i];
	}
	return str1;
}
