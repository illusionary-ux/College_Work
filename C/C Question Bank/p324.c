#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp, *fpA, *fpB;

	int data1, data2, line = 0;
	char op;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	fpA = fopen("CompA.txt", "r");
	if (NULL == fpA)
	{
		printf("can not open file!\n");
		fclose(fp); //先关闭前面已经打开的文件
		exit(1); //退出程序
	}
	fpB = fopen("CompB.txt", "r");
	if (NULL == fpB)
	{
		printf("can not open file!\n");
		fclose(fp); //先关闭前面已经打开的文件
		fclose(fpA); //先关闭前面已经打开的文件
		exit(1); //退出程序
	}

	/*以下循环中fscanf的作用：分别从三个文件中读取数据组成一个算式，从fp指向的文件中读一个数赋给变量data1,从fpA指向的文件中读一个字符赋给变量op，从fpB指向的文件中读一个数赋给变量data2*/
	while ((fscanf(fp, "%d", &data1) ==1) && (fscanf(fpA, "%c\n", &op) ==1) && (fscanf(fpB, "%d", &data2) ==1))		
	{
		line++;
		if (op == '+')
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
		}
		else
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
		}
	}
	
	fclose(fp);
	fclose(fpA);
	fclose(fpB);
	return 0;
}