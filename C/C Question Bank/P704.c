#include <stdio.h>

int main(void)
{
	int i, k, sum, m, n, count, arr[1000];

	printf("Please input an integer:");
	scanf("%d", &m); //输入整数m

	/* 因为1、2、3、4、5显然不是完数，所以只需要逐个判断6~m之间的数 */
	for (n=6; n<=m; n++)
	{
		/* 找出n的因子，并将各因子存入数组arr中，count用来记录n有多少个因子 */
		count = 0;
		for (k=1; k<=n/2; k++)
		{
			if (n % k == 0)
			{
				arr[count] = k;
				count++;
			}
		}
		/* 将n的各因子相加，各因子之和存放在变量sum中 */
		sum = 0;
		for (i=0; i<count; i++)
		{
			sum = sum + arr[i];
		}
		/* 如果n等于sum，则n为完数 */
		if (n == sum)
		{
			printf("%6d is a wanshu", n); //输出n的值
			/* 输出n的各个因子 */
			for (i=0; i<count; i++)
			{
				printf("%5d", arr[i]);
			}
			printf("\n");
		}
	}

	return 0;
}
