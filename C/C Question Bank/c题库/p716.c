#include <stdio.h>

int main(void)
{
	int a, n, i;
	double s = 0, tmp = 0;

	printf("Please input a,n:");
	scanf("%d,%d", &a, &n); //输入a的值和n的值
	/* 根据a和n的值进行计算 */
	for (i = 1; i <= n; i++)
	{
		tmp = tmp * 10 + a; //该表达式的计算结果依次为a,aa,aaa等，如果a的值为2，则应为2,22,222等
		s = s + tmp; //将tmp的值与变量s相加
		
	}
	printf("a+aa+...=%.0f\n", s); //输出结果

	return 0;
}