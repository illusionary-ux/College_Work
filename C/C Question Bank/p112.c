#include <stdio.h>

int main(void)
{
	double x, chanzhi = 5000;
	int year = 2006;

	printf("Please input x: ");
	scanf("%lf", &x);

	do
	{
		year++;
		chanzhi = chanzhi + chanzhi * x / 100;
	} while (chanzhi < 10000);

	printf("year = %d nian, chanzhi = %.2f\n", year, chanzhi);
	
	return 0;
}