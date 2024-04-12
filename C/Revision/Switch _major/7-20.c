#include<stdio.h>

int main(void)
{
	int num[1000], i, j, count = 1, n, tem, maxnum, maxcount, now;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	} 
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
	
	maxnum = num[0];
	maxcount = 1;
	now = num[0];
	
	for (i = 1; i < n; i++)
	{
		if (now != num[i])
		{
			if(count > maxcount)
			{
				maxcount = count;
				maxnum = now;
			}
			now = num[i];
			count = 1;
		}
		else
		{
			count++;
		}
	}
	if (now != num[i])
		{
			if(count > maxcount)
			{
				maxcount = count;
				maxnum = now;
			}
			now = num[i];
			count = 1;
		}
	printf("%d %d", maxnum, maxcount);
	return 0;
}
