#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct xx
{
	char xh[11], xm[9], xb[3], kc[15];
	int cj;
};

int main(void)
{
	struct xx ss;
	FILE *fp;
	int n = 0, m = 0;
	char a1[15];

	printf("请输入要计算及格率的课程名称：");
	gets(a1);
	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		exit(0);
	}
	printf("\n计算结果为：\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s %s %d", ss.xh, ss.xm, ss.xb, ss.kc, &ss.cj) == 5)
		{
			if (strcmp(a1, ss.kc) == 0)
			{
				n++;
				if (ss.cj >= 60)
				{
					m++;
				}
			}
		}
	}
	if (n == 0)
	{
		printf("文件中没有名称为“%s”的课程\n", a1);
	}
	else
	{
		printf("课程“%s”有 %d 人选学，其中及格 %d 人，及格率为%.1f", a1, n, m, (float)m/n);
	}
	fclose(fp);
	return 0;
}