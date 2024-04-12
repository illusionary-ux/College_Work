#include<stdio.h>

int main(void)
{
	int t, i, j, flag, n, k, num[10][10], jieguo[10], tot = 0;
	
	scanf("%d", &t);
	for (k = 0; k < t; k++)
	{
		scanf("%d", &n);
		
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				scanf("%d", &num[i][j]);
			}
		}
		flag = 1;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i > j && num[i][j] != 0)
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag)
		{
			jieguo[tot++] = 1;
		}
		else
		{
			jieguo[tot++] = 0;
		}
	}
	
	for (i = 0; i < k; i++)
	{
		if (jieguo[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		if (i != k - 1)
		{
			printf("\n");
		}
	}
	return 0;
}
