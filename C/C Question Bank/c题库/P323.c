#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int data1, data2, data3, result1, result2;
	char op1, op2;

	fp = fopen("Comp.txt", "r");
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}

	/* 以下fscanf的功能：从文件中读一个算式，算式中的第一个数赋给变量data1,第一个运算符赋给变量op1，第二个数赋给变量data2，第二个运算符赋给变量op2，第三个数赋给变量data3 */
	fscanf(fp, "%d %c %d %c %d", &data1, &op1, &data2, &op2, &data3); 
	

	
	if (op1 == '*') //如果第一个运算符是'*'
	{
		result1 = data1 * data2; //将算式中的前两个数相乘
		if (op2 == '+')  //第二个运算符是'+'
		{
			result2 = result1 + data3; //将前两个数的乘积和第三个数相加
		}
		else if (op2 == '-') //第二个运算符是减号'-'
		{
			result2 = result1 - data3; //将前两个数的乘积和第三个数相减
		}
		else if (op2 == '*') //第二个运算符是'*'
		{
			result2 = result1 * data3; //将前两个数的乘积和第三个数相乘

		}
	}
	else if (op2 == '*') //如果第一个运算符不是'*'， 第二个运算符是'*'
	{
		result1 = data2 * data3; //将算式中的第二个数和第三个数相乘
		if (op1 == '+')  //第一个运算符是'+'
		{
			result2 = data1 + result1; //将第一个数和后两个数的乘积相加
		}
		else if (op1 == '-') //第一个运算符是'-'
		{
			result2 = data1 - result1; //将第一个数和后两个数的乘积相减
		}
	}
	else //如果算式中的两个运算符都不是'*'
	{
		if (op1 == '+') //第一个运算符是'+'
		{
			result1 = data1 + data2; //将算式中的前两个数相加
		}
		else if (op1 == '-') //第一个运算符是'-'
		{
			result1 = data1 - data2; //将算式中的前两个数相减
		}

		if (op2 == '+') //第二个运算符是'+'
		{
			result2 = result1 + data3; //将算式中前两个数的和与第三个数相加
		}
		else if (op2 == '-') //第二个运算符是'-'
		{
			result2 = result1 - data3; //将算式中前两个数的和与第三个数相减
		}			
	}
	

	printf("%d %c %d %c %d = %d\n", data1, op1, data2, op2, data3, result2);

	fclose(fp);

	return 0;
}