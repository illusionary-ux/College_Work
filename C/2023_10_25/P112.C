#include<stdio.h>

int main(void)
{
	float chanzhi = 5000, x;
	int year = 0;

	printf("Please input x: ");
	scanf("%f", &x);
	x = x / 100;
	do
	{
		chanzhi = chanzhi * (1 + x);
		year++;
	} while (chanzhi < 10000);
	printf("\nyear = %d nian, chanzhi %.2f", year + 2006, chanzhi);
	return 0;
} 