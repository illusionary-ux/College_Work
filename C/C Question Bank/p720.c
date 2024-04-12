#include <stdio.h>

int main(void)
{
	double a, b;

	printf("please input two numbers: ");
	scanf("%lf,%lf", &a, &b);
	printf("a=%.06lf, b=%.06lf\n", a, b);
	
	return 0;
}