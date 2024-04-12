#include <stdio.h>
/*********Found************/
#include <math.h>

#define PI 3.1415927

int main(void)
{
	double fRadius, fSquare, fVolume;

	printf("Input the radius of the cone: ");
	/*********Found************/
   	scanf("%lf", &fRadius);

	/*********Found************/
	fSquare = PI * fRadius * (fRadius + sqrt(fRadius * fRadius  +  5 * 5));
	fVolume = PI * fRadius * fRadius * 5 / 3;

	printf("The area of the cone is %6.3lf\n", fSquare);
	printf("The volume of the cone is %6.3lf\n", fVolume);

	return 0;
}

