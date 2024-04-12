#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;
	char filename[128];

	printf("input the file's name: ");
	gets(filename); //输入文件名

	fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(1);
	}

	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp); //从fp指向的文件中读一个字符赋给变量ch
	while (feof(fp) == 0) //文件没有结束
	{
		if ((char)ch == '*') //变量ch中的字符是*
		{
			putchar('@'); //在屏幕上输出@
		}
		else
		{
			putchar(ch); //在屏幕上输出变量ch中的字符
		}
		ch = fgetc(fp); //从fp指向的文件中读一个字符赋给变量ch
	}
	printf("\n------------------------ File End. ----------------------\n");

	fclose(fp);
	return 0;
}
