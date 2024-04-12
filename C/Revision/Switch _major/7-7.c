#include<stdio.h>
#include<math.h>

int main(void)
{
	int m, i, j, flag;
	int pri[100], sum = 0;
	
	scanf("%d", &m);
	if (m <= 2)
	{
		printf("NO");
	}
	else
	{
		for (i = 2; i < m; i++)
	{
		flag = 0;
		for(j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			pri[sum++] = i;
		}
	}
	
	if (sum > 100)
	{
		printf("OVERFLOW");
	}
	else
	{
		for (i = 0; i < sum; i++)
		{
			printf("%5d",pri[i]);
			if ((i+1) % 15 ==0)
			{
				printf("\n");
			}
		}
	}
	}
	
	return 0;
}
