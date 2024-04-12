#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct qq
{
	char xh[11], xm[9], kc[15], xb[3];
	int cj;
};

int main(void)
{
	struct qq ss;
	int n = 0;
	FILE *fp;
	char a1[9];

	printf("请输入要查找成绩的学生姓名：");
	gets(a1);

	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
	}
	printf("\n查找结果为：\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s %s %d", ss.xh, ss.xm, ss.xb, ss.kc, &ss.cj) == 5)
		{
			if (strcmp(a1, ss.xm) == 0)
			{
				n++;
				printf("%d %-10s, %-8s, %-2s, %-14s, %d\n", n, ss.xh, ss.xm, ss.xb, ss.kc, ss.cj);
			}
		}

	}
	if (n == 0)
	{
		printf("文件中没有找到姓名为“%s”的学生\n", a1);
	}
	fclose(fp);
	return 0;
}