#include<stdio.h>

int main(void)
{
	int m, n, i, j;
	int arr[20][20];
	int hangmax, liemax, hangmaxlie, flag = 0;

	printf("Please input m and n:");
	scanf("%d %d", &m, &n);
	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		hangmax = arr[i][0];
		hangmaxlie = 0;
		for (j = 1; j < n; j++)
		{
			if (arr[i][j] > hangmax)
			{
				hangmax = arr[i][j];
				hangmaxlie = j;
			}
		}
		liemax = arr[0][hangmaxlie];
		for (j = 1; j < m; j++)
		{
			if (arr[j][hangmaxlie] < liemax)
			{
				liemax = arr[j][hangmaxlie];
			}
		}
		if (hangmax == liemax)
		{
			printf("\nyou an dian, wei: juZhen[%d][%d]=%d\n", i, hangmaxlie, hangmax);
			flag = 1;
			break;
		}
		
	}
	if (flag == 0)
	{
		printf("\nmei you an dian.\n");
	}
	return 0;
}