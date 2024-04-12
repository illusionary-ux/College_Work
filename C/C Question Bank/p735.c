#include <stdio.h>
#include <math.h>

int main(void)
{
	int bian, zhouchang;
	double p, mianji;

	printf("Input a side of triangle: ");
	scanf("%d", &bian);

	p = (bian + bian + bian) / 2.0;
	mianji = sqrt(p * (p - bian) * (p - bian) * (p - bian));
	zhouchang = bian + bian + bian;

	printf("\nThe area of triangle is %.2f, the circle of triangle is %d.\n", mianji, zhouchang);

	return 0;
}
