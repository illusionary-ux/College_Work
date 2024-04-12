#include <stdio.h>

int main(void)
{
	double huashi, sheshi;

	printf("Input the degree: ");
	scanf("%lf", &huashi);

	sheshi = 5 * (huashi - 32) / 9;

	printf("\nF(%.2f)=C(%.2f)", huashi, sheshi);

	return 0;
}