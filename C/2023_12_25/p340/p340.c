#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp;
	char input[9], chepai[9], data[11], leixing[5];
	int tot = 1, flag = 0;
	
	fp = fopen("jtwz.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 0;
	}
	printf("请输入要查找的违章类型：");
	gets(input);
	printf("\n查找结果为：\n");
	while(fscanf(fp, "%s %s %s", chepai, data, leixing) == 3)
	{
		if (strcmp(input, leixing) == 0)
		{
			flag = 1;
			printf("%d %s,%s,%s\n", tot++, chepai, data, leixing);
		}
	}
	if (flag == 0)
	{
		printf("文件中没有找到“%s”的记录", input);
	}
	return 0;
}
