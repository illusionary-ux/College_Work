#include <stdio.h>

int main(void)
{
	int n; //定义变量

	printf("Please input an integer: "); //在屏幕上输出提示语
	scanf("%d", &n); //从键盘输入一个十进制整数赋给变量n	

	if ((n % 5 == 0) && (n % 7 == 0)) //n既是5又是7的整倍数
	{
		printf("\nYes.");
	}
	else 
	{
		printf("\nNo.");
	}
	
	return 0;
}