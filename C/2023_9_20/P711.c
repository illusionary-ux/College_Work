#include<stdio.h>

#define PI 3.14

int main(void)
{
	float r, h;
	double c1, s, v1;
	
	printf("Input: ");
	scanf("r=%f, h=%f", &r, &h);
	//printf("%f,%f", r, h);
	c1 = 2 * PI * r;
	s = PI * r * r;
	v1 = s * h;
	printf("\nC1 = %.2lf\n S = %.2lf\n V = %.2lf", c1, s, v1);
	
	return 0;
}
