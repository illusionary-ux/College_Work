#include <stdio.h>

int main(void)
{
	int x, y, max; //定义变量, 其中变量max用来存放x和y中的较大值

	printf("please input x,y: "); //在屏幕上输出提示语句
	scanf("%d,%d", &x, &y); //从键盘输入两个十进制整数分别赋给变量x和y

	/*以下if结构用来比较x和y的最大值，并将最大值赋给变量max*/
	if (x > y) 
	{
		max = x;
	}
	else
	{
		max = y;
	}

	printf("\n%d is bigger\n", max); //输出变量max的值
	
	return 0;
}