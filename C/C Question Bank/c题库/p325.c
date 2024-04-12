#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp, *fpA, *fpB, *fpC;

	int data1, data2, line = 0, jieguo;
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
		fclose(fpA);
		exit(1);
	}
	fpB = fopen("CompB.txt", "r");
	if (NULL == fpB)
	{
		printf("can not open file!\n");
		fclose(fp);
		fclose(fpA);
		exit(1);
	}
	fpC = fopen("CompC.txt", "w");
	if (NULL == fpC)
	{
		printf("can not open file!\n");
		fclose(fp);
		fclose(fpA);
		fclose(fpB);
		exit(1);
	}

	/*以下循环中fscanf的作用：分别从三个文件中读取数据组成一个算式，从fp指向的文件中读一个数赋给变量data1,从fpA指向的文件中读一个字符赋给变量op，从fpB指向的文件中读一个数赋给变量data2*/	
	while ((fscanf(fp, "%d", &data1) ==1) && (fscanf(fpA, "%c\n", &op) ==1) && (fscanf(fpB, "%d", &data2) ==1))		
	{
		line++;
		if (op == '+')
		{
			jieguo = data1 + data2;
			fprintf(fpC, "Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2); //将计算结果写到fpC指向的文件中
		}
		else
		{
			jieguo = data1 - data2;
			fprintf(fpC, "Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2); //将计算结果写到fpC指向的文件中
		}
	}
	
	fclose(fp);
	fclose(fpA);
	fclose(fpB);
	fclose(fpC);
	return 0;
}