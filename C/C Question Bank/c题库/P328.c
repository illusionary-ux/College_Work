#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char  filename[128];
	int ch;
	
	printf("input the file's name: ");
	gets(filename); //从键盘输入文件名，并将文件名存放在数组filename中
	
	fp = fopen(filename, "r");
	if (NULL == fp)
	{
		printf("\nfile open error!");
		exit(1);
	}

	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp); //从文件中读一个字符赋给变量ch
	while (feof(fp) == 0) //使用函数feof判断fp指向的文件是否结束，如果函数值为0，则文件未结束
	{   
		putchar(ch); //将变量ch中的字符输出到显示屏上
		ch = fgetc(fp); //从文件中读一个字符赋给变量ch
	}
	printf("\n------------------------ File End. ----------------------\n");

	fclose(fp);

	return 0;
}