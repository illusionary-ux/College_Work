#include<stdio.h>
#include<math.h>

int main(void)
{
	int aim, i, j, tot = 0, sum = 0;
	int num[100000];
	
	scanf("%d", &aim);
	for (i = 2; i <= aim; i++)
	{
		int flag = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			num[tot++] = i;
		}
	}
	for (i = 0; i < tot - 1; i++)
	{
		if(num[i+1] - num[i] == 2)
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
