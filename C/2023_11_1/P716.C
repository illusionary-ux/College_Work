#include<stdio.h>

int main(void)
{
	int a1, n1, i;
	double sum = 0, bn = 0;

	printf("Please input a,n: ");
	scanf("%d,%d", &a1, &n1);
	for (i = 1; i <= n1; i++)
	{
		bn = bn + a1;
		sum = sum + bn;
		bn = bn * 10;
	}
	printf("\na+aa+...=%.f", sum);
	return 0;
}