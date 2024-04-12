#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int fx(int n);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn = fx(n);  /* userCode(<50字符): 调用函数计算f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fx(int n)
{
	int result;
	
	if (n == 1)
	{
		result = 1;
	}
	else if (n < 1)
	{
		result = 0;
	}
	else
	{
		result = 2 * fx(n / 2) + n;
	}
	return result;
}

