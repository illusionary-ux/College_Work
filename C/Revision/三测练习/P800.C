#include <stdio.h>

void fun(double *sn, int n);

int main(void)
{
	int n;
	double Sum;

	printf("Please input n: ");
	scanf("%d", &n);

	fun(&Sum, n);  /* userCode(<30字符): 调用函数计算Sum */
	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f\n", n, Sum);

	return 0;
}


void fun(double *sn, int n)
{
	int i;
	double Sum=0, jc=1;

	for (i=1; i<=n; i++)
	{
		jc *= i;
		Sum += 1 / jc;
	}

	*sn = Sum;  /* userCode(<30字符): 将计算结果通过指针参数返给主调函数 */
}
