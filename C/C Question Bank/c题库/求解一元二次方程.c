#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, x1, x2; /*定义变量*/

	printf("请输入a,b,c："); /*在屏幕上输出提示语*/
	scanf("%lf,%lf,%lf", &a, &b, &c); /*从键盘输入a、b、c的值*/
	
	x1 = (-b+sqrt(b * b - 4 * a *c)) / (2 * a); /*计算方程的第一个根*/
	x2 = (-b-sqrt(b * b - 4 * a *c)) / (2 * a); /*计算方程的第二个根*/
	
	printf("一元二次方程的解为：\nx1=%.2f\nx2=%.2f\n", x1, x2); /*输出结果*/

	return 0;

}