#include <stdio.h>

#define PI 3.14

int main(void)
{
	double r, h, C1, S, V;  /*定义变量*/

	printf("请输入圆的半径：\n");  /*在屏幕上输出提示语*/
	scanf("%lf", &r);  /*从键盘输入圆半径赋给变量r*/
	printf("请输入圆柱的高：\n");  /*在屏幕上输出提示语*/
	scanf("%lf", &h);  /*从键盘输入圆柱高赋给变量h*/
	
	C1 = 2 * PI * r;  /*计算圆周长*/
	S = PI * r * r;  /*计算圆面积*/
	V = PI * r * r * h; /*计算圆柱体积*/
	
	printf("圆周长为：%.2f\n圆面积为：%.2f\n圆柱体积为：%.2f\n", C1, S, V);  /*输出结果*/

	return 0;
}