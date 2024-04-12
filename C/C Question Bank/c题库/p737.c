/* 
程序的功能：
	从键盘输入3个整数，输出绝对值最大的数。
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int shu1, shu2, shu3, max;

	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &shu1, &shu2, &shu3); //从键盘输入3个整数

	
	if (abs(shu1) > abs(shu2))  //函数abs的功能是求某个整数的绝对值
	{
		max = shu1; //如果shu1的绝对值大于shu2的绝对值，将shu1的值赋给变量max
	}
	else
	{
		max = shu2; //如果shu2的绝对值大于shu1的绝对值，将y的值赋给变量max
	}
	if (abs(shu3) > abs(max))
	{
		max = shu3; //如果shu3的绝对值大于max的绝对值，将shu3的值赋给变量max
	}
	
	printf("The number with maxinum absolute value is %d.\n", max); //输出绝对值最大的数
	
	return 0;
}