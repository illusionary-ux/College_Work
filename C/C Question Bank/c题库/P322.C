#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, line = 0, panduan;
	char op, str[200];

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	fgets(str, 200, fp); //从文件中读出一个字符串并存放到数组str中
	while (!feof(fp)) //文件未结束		
	{
		line++;  //增加一行
		panduan = sscanf(str, "%d %c %d", &data1, &op, &data2); //将数组str中的字符串转换成格式符指定的数据并赋给对应的变量
		if (panduan == 3) //是一个算式
		{
			if (op == '+') //运算符为'+'
			{
				printf("Line %03d:  %5d + %-5d = %-6d\n", line, data1, data2, data1 + data2);
			}
			else if (op == '-') //运算符为'-'
			{
				printf("Line %03d:  %5d - %-5d = %-6d\n", line, data1, data2, data1 - data2);
			}
			else //其它运算符
			{
				printf("Line %03d: Error!\n", line);
			}
		}
		else if (panduan == EOF) //空行
		{

		}
		else //不符合要求的算式
		{
			printf("Line %03d: Error!\n", line);
		}
		fgets(str, 200, fp); //从文件中读出一个字符串并存放到数组str中

	}

	fclose(fp);

	return 0;
}