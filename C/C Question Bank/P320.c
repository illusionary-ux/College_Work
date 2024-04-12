#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2;
	char op;

	fp = fopen("Comp.txt", "r"); //打开文件
	if (NULL == fp) //判断文件是否打开
	{
		printf("can not open file!\n");
		exit(1); //如果文件打不开，终止程序
	}

	fscanf(fp, "%d %c %d", &data1, &op, &data2); //从文件中读数据赋给变量data1、op、data2

	if (op == '+') //如果文件中读出的运算符是+，执行加法运算
	{
		printf("%d + %d = %d\n", data1, data2, data1 + data2);
	}
	else //如果文件中读出的运算符是-，执行减法运算
	{
		printf("%d - %d = %d\n", data1, data2, data1 - data2);
	}

	fclose(fp); //关闭文件

	return 0;
}