#include <stdio.h>

int main(void)
{
	int num, ge, shi, bai, qian, sum;  /*定义变量*/

	printf("请输入一个四位整数：\n");  /*在屏幕上输出提示语*/
	scanf("%d", &num);  /*从键盘输入一个四位整数赋给变量num*/
	ge = num % 10;  /*计算个位数字*/
	shi = num / 10 % 10;  /*计算十位数字*/
	bai = num /100 % 10; /*计算百位数字*/
	qian = num / 1000;  /*计算千位数字*/

	sum = ge + shi + bai + qian;  /*计算各位数字之和*/

	printf("四位数字之和为：%d\n", sum);  /*输出结果*/

	return 0;
}