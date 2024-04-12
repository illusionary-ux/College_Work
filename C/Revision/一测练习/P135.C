#include<stdio.h>
#include<math.h>

int main(void)
{
	double x,shuzhi;

	printf("«Î ‰»Îª°∂» x: ");
	scanf("%lf", &x);
	shuzhi = sin(x);
	printf("\nSin(%.2f) = %.5f\n", x, shuzhi);
	return 0;
}