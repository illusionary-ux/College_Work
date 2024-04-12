#include <stdio.h>

int main(void)
{
	int i, k1, k2, from, to, count, num = 0, arr[1000];

	printf("Input 2 integer to determin the range.\n");
	scanf("%d%d", &from, &to); //输入数据范围

	/* 逐个判断在from到to的范围内的哪些数是完数 */
	for (k1=from; k1<=to; k1++)
	{
		/* 找出k1的各个因子，并将各因子依次存放到数组arr中，因子的个数由count记录 */
		for (i=1, count=0; i<=k1/2; i++)
		{
			if (k1 % i == 0)
			{
				arr[count] = i;
				count++;
			}
		}
		/* 将k1的各个因子相加，各因子之和存放到变量k2中 */
		for (i=0, k2=0; i<count; i++)
		{
			k2 = k2 + arr[i];
		}
		/* 如果k1等于k2，则k1是完数 */
		if (k1 == k2)
		{
			printf("%d ", k1); //输出k1的值
			num++; //变量num的值增加1（变量num用来记录完数的数量）
		}
	}
	printf("\ncount=%d\n", num); //输出完数的个数

	return 0;
}