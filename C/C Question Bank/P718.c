/*
程序的功能：
	有一递推数列，满足f(0)=0,f(1)=1,f(2)=2,  f(n+1)=2f(n)+f(n-1)f(n-2) (n>=2),
编写程序求f(n)的值（n由键盘输入，13>=n>=2）。
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	double fn[14] = {0, 1, 2}; //初始化数组fn，初始化的结果为fn[0]为0、fn[1]为1、fn[2]为2
	
	printf("Input n (13>=n>=2):");
	scanf("%d", &n); //输入n的值
	/* 根据公式依次计算数列项f(3)~f(n)的值，并将该值放到相应的数组元素fn[3]~fn[n]中 */
	for (i=3; i<=n; i++)
	{
		fn[i] = 2 * fn[i-1] + fn[i-2] * fn[i-3];
	}	
	
	printf("f(%d)=%.0f\n", n, fn[n]); //输出n和f(n)的值（即fn[n]的值）
	
	return 0;
}
