#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp;
	char name[9], num[11], gender[3], course[15], input[9];
	int score, line = 1, flag = 0;
	
	printf("请输入要查找成绩的学生姓名：");
	gets(input);
	fp = fopen("xscj.txt", "r");
	if (NULL == fp)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 0;
	}
	printf("\n查找结果为：\n");
	while (fscanf(fp, "%s %s %s %s %d", num, name, gender, course, &score) == 5)
	{
		if (strcmp(input, name) == 0)
		{
			flag = 1;
			printf("%d %s, %-8s, %s, %-14s, %d\n", line++, num, name, gender, course, score);
		}
	}
	if (flag == 0)
	{
		printf("文件中没有找到姓名为“%s”的学生\n", input);
	}
	fclose(fp);
	return 0;
}
