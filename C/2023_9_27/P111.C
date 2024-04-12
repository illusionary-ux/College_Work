#include<stdio.h>

int main(void)
{
	int x;
	double fx;

	printf("Please input x: ");
	scanf("%d", &x);
	if (x < 0)
	{
		fx = -5.0 * x + 27;
	}
	else if (x == 0)
	{
		fx = 7909;
	}
	else
	{
		fx = 2.0 * x - 1;
	}
	printf("\nF(%d) = %.0lf", x, fx);
	return 0;
}