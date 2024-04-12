#include<stdio.h>

int main(void)
{
	int num[3];
	int i, j, tem;
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for (i = 0; i < 2; i++)
	{
		for(j = i + 1; j < 3; j++)
		{
			if (num[i] > num[j])
			{
				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d", num[i]);
		if (i < 2)
		{
			printf("->");
		}
	}
	return 0;
}
