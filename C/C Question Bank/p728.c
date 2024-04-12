#include <stdio.h>

int main(void)
{
	int num, total; //定义变量，其中num用来存放数量，total用来存放总价

	printf("please input num: "); //在屏幕上输出提示语句
	scanf("%d", &num); //从键盘输入一个十进制整数赋给变量num

	total = num * 30; //计算总价并赋给变量total

	printf("\ntotal=%d\n", total); //输出变量total的值
	
	return 0;
}