#include<stdio.h>

int main(void)
{
	int n, i, num[10000];
	double avr = 0, cou = 0;
	
	scanf("%d", &n);
	if (n == 0)
	{
		printf("average = 0.0\n");
		printf("count = 0");
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (num[i] >= 60)
		{
			cou++;
		}
		avr += num[i];
	}
	avr /= n;
	printf("average = %.1lf\n", avr);
	printf("count = %.0lf", cou);
	}
	
	return 0;
}
