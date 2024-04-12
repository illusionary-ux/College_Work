#include <stdio.h>
#include <math.h>

int main(void)
{
	double deposit, n, capital; /*定义变量*/

	printf("请输入本金："); /*在屏幕上输出提示语*/
	scanf("%lf", &capital); /*从键盘输入本金赋给变量capital*/
	printf("请输入存期："); /*在屏幕上输出提示语*/
	scanf("%lf", &n); /*从键盘输入存期赋给变量n*/
	
	deposit = capital*pow((1+2.25/100), n); /*计算本利之和*/

	printf("本利之和为：%.2f\n", deposit); /*输出结果*/

	return 0;

}