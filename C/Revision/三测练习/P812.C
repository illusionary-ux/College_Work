#include <math.h>
#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
______________________________

int main(void)
{
	int aBian, bBian, cBian;
	double mJi;

	printf("please input triange sides: ");
	scanf("%d,%d,%d", &aBian, &bBian, &cBian);

	if (aBian<0 || bBian<0 || cBian<0
			|| (aBian+bBian <= cBian) || (aBian+cBian <= bBian) || (bBian+cBian <= aBian))
	{
		printf("\ndata error\n");
	}
	else
	{
		______________________________  /* userCode(<50字符): 调用函数计算三角形面积 */
		printf("\narea=%.2f\n", mJi);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */



