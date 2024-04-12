#include<stdio.h>

int main(void)
{
	int x[5], y[5], sum = 0, i, z1;

	printf("Input A: ");
	for (i = 0; i <= 3; i++)
	{
		scanf("%d ", &x[i]);
	}
	scanf("%d", &x[4]);
	printf("Input B: ");
	for (i = 0; i <= 3; i++)
	{
		scanf("%d ", &y[i]);
	}
	scanf("%d", &y[4]);
	for (i = 0, z1 =4 ; i <= 4 && z1>= 0; i++, z1--)
	{
		sum = sum + x[i] * y[z1];
	}
	printf("\nsum=%d\n", sum);
	return 0;
}