#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //形参argc的值是程序运行时从键盘输入的字符串数量（包含文件名），指针数组argv中的指针变量指向从键盘输入的字符串（1个指针变量指向一个字符串）
{
	double num1, num2; 

	/* 如果输入的参数个数错误（本题中要求参数为3），输出错误信息，返回103并退出程序*/
	if (argc != 3)
	{
		printf("    usage: P118  num1 num2\n");
		exit(103);  
	}
	num1 = atof(argv[1]); //将从键盘输入的第二个字符串转换为double型的数，赋给num1作为参加运算的第一个数
	num2 = atof(argv[2]); //将从键盘输入的第三个字符串转换为double型的数，赋给num2作为参加运算的第二个数
	
	printf("    (%.3f*%.3f - %.3f*%.3f) / 6   =  %.3f\n", num1, num1, num2, num2, (num1 * num1 - num2 * num2) / 6);

	return 0; //程序正常结束，返回0
}