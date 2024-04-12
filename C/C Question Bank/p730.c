#include <stdio.h>

int main(void)
{
	int x, y; //定义变量

	printf("please input x,y: "); //在屏幕上输出提示语句
	scanf("%d %d", &x, &y); //从键盘输入两个十进制整数分别赋给变量x和y

	/*以下if结构用来比较x和y是否相等*/
	if (x == y) 
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}

	return 0;
}