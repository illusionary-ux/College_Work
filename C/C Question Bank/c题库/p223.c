#include <stdio.h>

int main(void)
{
	double hn = 10000, sn = 10000; //hn是反弹的高度，sn是落地经过的距离
	int i, n;

	printf("Please input n:");
	scanf("%d", &n); //输入n的值

	for (i=1; i<=n; i++)
	{
		hn = hn / 2;  //计算第n次反弹的高度
		sn = sn + 2 * hn; //计算第n+1次落地经过的距离
	}

	sn = sn - 2 * hn; //从sn中减去第n次反弹的高度和第n+1次落地的高度，才等于第n次落地总共经过的距离

	printf("sn=%f,hn=%f\n", sn, hn); //输出结果
	
	return 0;
}