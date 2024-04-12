#include<stdio.h>

int main(void)
{
	int m1, sum = 0, i = 0;

	printf("please input m: ");
	scanf("%d", &m1);
	while (sum <= m1)
	{
		i += 1;
		sum += i;
	}
	i -= 1;
	sum = sum - i - 1;
	printf("\nResult: n=%d, sum=%d", i, sum);
	return 0;
}