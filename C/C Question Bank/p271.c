#include <stdio.h>

int main(void)
{
	int aa[20][20], i, j, m, n, qq, sum = 0;

	printf("请输入 m 和 n: ");
	scanf("%d %d", &m, &n);
	printf("请输入 %d 行, 每行 %d 列整数:\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &aa[i][j]);
		}
	}
	printf("请输入要计算和之列的列号: ");
	scanf("%d", &qq);
	for (i = 0; i < m; i++)
	{
		sum = sum + aa[i][qq];
	}
	printf("\n该列上各元素之和为: %d", sum);
	return 0;
}