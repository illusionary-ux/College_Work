#include <math.h>
#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=80, 考生可在本行后添加代码、最多1行、行长<=80字符) */
double qiumianjian(double bianX, double bianY, double bianZ);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{   
	double bianA, bianB, bianC, mianJi;

	printf("please input triange sides:");
	scanf("%lf,%lf,%lf", &bianA, &bianB, &bianC);

	if (bianA<0 || bianB<0 || bianC<0
			|| (bianA+bianB <= bianC) || (bianA+bianC <= bianB) || (bianB+bianC <= bianA))
	{
		printf("\ndata error\n");
	}
	else
	{
		/* 本部分代码功能建议：调用用户自定义函数求三角形面积 */	
		/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
		mianJi = qiumianjian(bianA, bianB, bianC);
		/* User Code End(考生添加代码结束。注意：空行和单独为一行的{
		与}均不计行数、行长不计行首tab缩进) */
		printf("\narea=%.2f\n", mianJi);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
double qiumianjian(double bianX, double bianY, double bianZ)
{
	double s, area;
	
	s = (bianX + bianY + bianZ) / 2;
	area = sqrt(s * (s - bianX) * (s - bianY) * (s - bianZ));
	return area;
}