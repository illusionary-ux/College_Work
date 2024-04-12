#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) //形参argc的值是程序运行时从键盘输入的字符串数量（包含文件名），指针数组argv中的指针变量指向从键盘输入的字符串（1个指针变量指向一个字符串）
{
	int i, j;
	char *tmp;
	/* 如果输入的参数个数错误（本题中要求参数为4），输出错误信息，返回1并退出程序*/
	if (argc != 4)
	{
		printf("    error, usage: P792  str1 str2 str3\n");
		exit(1);  
	}
	for (j = 1; j <= 2; j++)
	{
		for (i = 1; i <= 3 - j; i++)
		{
			if (strcmp(argv[i], argv[i+1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i+1];
				argv[i+1] = tmp;
			}
		}
	}
	printf("    output: %s   %s   %s\n", argv[1], argv[2], argv[3]);	

	return 0; //程序正常结束，返回0
}