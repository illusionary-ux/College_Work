#include <stdio.h>
#include <math.h>

int main(void)
{
	double a1, b1, c1, area, s; //定义变量

	printf("please input triange sides:");
	scanf("%lf,%lf,%lf", &a1, &b1, &c1); //从键盘输入三个double型的数分别赋给变量a1,b1,c1

	if ((a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1))  //三条边能构成三角形
	{
		s = (a1 + b1 + c1) / 2;
		area = sqrt(s * (s - a1) * (s - b1) * (s - c1));
		printf("area=%.2f\n", area);
	}
	else //三条边不能构成三角形
	{
		printf("data error\n");
	}

	return 0;
}