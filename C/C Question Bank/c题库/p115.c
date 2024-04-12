/*
制作一简单的计算器，注意事项：
　　(1)需要计算的内容从命令行输入，格式为：P115 数1 op 数2，当命令行格式不正确(参数个数不为4)时，应报错。
　　(2)op的取值范围为+、-、*、/、%，超出此范围则应报错。
　　(3)数1和数2均为整数(int)，op为+、-、*时不考虑运算结果超出int型能表示的范围, op为/、%时不考虑除数为0的情况，但op为/时计算结果应保留2位小数。
　　(4)程序的返回值(即由main函数return的值和程序使用exit终止运行时返回的值，也称退出代码)规定为：
　　　　①正常运行结束时，返回0　　②命令行格式不对返回1　　　③op超出范围时返回2
　　(5)编程可用素材：printf("\nusage:P115  num1 op num2\n")...、printf("\nop(...) Error!\n"...。
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //形参argc的值是程序运行时从键盘输入的字符串数量（包含文件名），指针数组argv中的指针变量指向从键盘输入的字符串（1个指针变量指向一个字符串）
{
	int num1, num2; 

	/* 如果输入的参数个数错误（本题中要求参数为4），输出错误信息，返回1并退出程序*/
	if (argc != 4)
	{
		printf("\nusage:P115  num1 op num2\n");
		exit(1);  
	}
	num1 = atoi(argv[1]); //将从键盘输入的第二个字符串转换为整数，赋给num1作为参加运算的第一个数
	num2 = atoi(argv[3]); //将从键盘输入的第四个字符串转换为整数，赋给num2作为参加运算的第二个数
	
	/* 根据输入的运算符，判断并进行相应的运算 */
	switch (*argv[2]) //从键盘输入的第三个字符串为运算符，该字符串的第一个字符（即argv[2][0]的值）就是运算符
	{
		case '+': 
			printf("%d + %d = %d\n", num1, num2, num1 + num2);  //加法运算
			break;
		case '-':
			printf("%d - %d = %d\n", num1, num2, num1 - num2);  //减法运算
			break;
		case '*':
			printf("%d * %d = %d\n", num1, num2, num1 * num2);  //乘法运算
			break;
		case '/':
			printf("%d / %d = %.2f\n", num1, num2, (double)num1 / num2); //除法运算
			break;
		case '%':
			printf("%d %% %d = %d\n", num1, num2, num1 % num2); //求余运算
			break;
		default:
			printf("\nop(%c) Error!\n", argv[2][0]); //如果操作符不是指定的操作符，输出错误信息
			exit(2); //返回2并退出程序
	}

	return 0; //程序正常结束，返回0
}