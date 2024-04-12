#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, line = 0; //变量line用来存放从文件中读出了多少行数据
	char op;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	while (fscanf(fp, "%d %c %d", &data1, &op, &data2) == 3) //如果fscanf的函数值为3，说明从文件中读出3个数据分别赋给data1, op, data2		
	{
		line++; //行数增加1
		if (op == '+') //进行加法运算
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
		}
		else //进行减法运算
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
		}
	}

	fclose(fp);

	return 0;
}