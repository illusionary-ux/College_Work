#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, i;
	double sum = 1;
	
	scanf("%d", &n);
	for(i = 1; i < n; i++)
	{
		sum += pow(-1, i) * 1 / (3 * i + 1);
	}
	printf("sum = %.3lf", sum);
	return 0;
}
