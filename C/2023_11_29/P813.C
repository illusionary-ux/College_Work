#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double fx(int n);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = fx(n);  /* userCode(<50字符): 调用函数计算fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double fx(int n)
{
	double result;
	
	if (n == 0 || n == 1 || n == 2)
	{
		return n;
	}
	else
	{
		result = 2 * fx(n - 1) + fx(n - 2) * fx(n - 3);
		return result;
	}
}
