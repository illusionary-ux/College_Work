/* 求1+2+3+……+n≤m时的最大n值及和sum(＝1+2+3+……+n)，其中m从键盘输入 */
#include <stdio.h>

int main(void)
{
	int m, n = 0, sum = 0;

	printf("please input m:");
	scanf("%d", &m); //输入m的值

	/* 计算累加和 */
	while (sum <= m)
	{
		n++;
		sum = sum + n;
	}
	sum = sum - n; //从sum中减去最后一个累加项n，则sum的值满足小于等于m
	
	printf("\nResult: n=%d, sum=%d\n", n-1, sum); //输出结果

	return 0;

}