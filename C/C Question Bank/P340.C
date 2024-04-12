#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sp
{
	char cph[9], rq[11], lx[9];
};

int main(void)
{
	FILE *fp;
	struct sp ss;
	int n = 0;
	char a1[9];

	printf("请输入要查找的违章类型：");
	gets(a1);
	fp = fopen("jtwz.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		exit(1);
	}
	printf("\n查找结果为：\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s", ss.cph, ss.rq, ss.lx) == 3)
		{
			if (strcmp(a1, ss.lx) == 0)
			{
				n++;
				printf("%d %s, %s, %s\n", n, ss.cph, ss.rq, ss.lx);
			}
		}
	}
	if (n == 0)
	{
		printf("文件中没有找到“%s”的记录\n", a1);
	}
	fclose(fp);

	return 0;
}