#include <stdio.h>

int main(void)
{
	double r1, h1, C1, S1, V1;

	printf("Input: ");
	scanf("r=%lf,h=%lf", &r1, &h1);	

	C1 = 2 * 3.14 * r1;
	S1 = 3.14 * r1 * r1;
	V1 = 3.14 * r1 * r1 * h1;
	printf("\nC1=%.2f\nS=%.2f\nV=%.2f\n", C1, S1, V1);

	return 0;
}