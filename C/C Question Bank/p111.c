#include <stdio.h>

int main(void)
{
	int x;
	double y;

	printf("\nPlease input x:"); //在屏幕上输出提示语
	scanf("%d", &x); //从键盘输入一个十进制整数赋给变量x

	if (x < 0) //x小于0 
	{
		y = (double)(-5) * x + 27;
	}
	else if (0 == x) //x等于0
	{
		y = (double)7909;
	}
	else //x大于0
	{
		y = (double)2 * x - 1;
	}

	printf("\nF(%d) = %.0f", x, y); //按题目规定格式输出x和y的值

	return 0;
}