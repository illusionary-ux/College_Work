#include<stdio.h>

int main(void)
{
	int nn, i;
	double sum = 0, fac = 1;

	printf("Please input n:");
	scanf("%d", &nn);
	for (i = 1; i <= nn; i++)
	{
		fac = fac * i;
		sum = sum + 1 / fac;
	}

	printf("S=1/1!+1/2!+...+1/%d!=%.16f", nn, sum);

	return 0;
}