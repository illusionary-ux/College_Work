#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("Test.txt", "w");
	if (NULL == fp)
	{
		printf("\nCreate file error!\n");
		exit(1);
	}
	printf("Input chars: ");
	ch = getchar(); //从键盘读一个字符赋给变量ch
	while ((char)ch != '!') //变量ch中的字符不是！
	{
		if ((char)ch >= 'a' && (char)ch <= 'z') //是小写字母
		{
			ch = ch - 32; //转换成大写字母			
		}
		if (fputc(ch, fp) == EOF) //将变量ch中的字符写到fp指向的文件中，如果fputc的函数值为EOF,说明写错误
		{
			printf("\nWriting file error!\n"); //输出错误信息
			fclose(fp);
			exit(2); //结束程序，并返回退出码2
		}

		ch = getchar(); //从键盘读一个字符赋给变量ch
	}

	fclose(fp);
	return 0;
}