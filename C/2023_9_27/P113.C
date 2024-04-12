#include<stdio.h>

int main(void)
{
	int benjin, cunqi;
	double lixi;

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &benjin, &cunqi);
	if (cunqi == 1)
	{
		lixi = 1.0 * benjin * 0.0315;
	}
	else if (cunqi == 2)
	{
		lixi = 2.0 * benjin * 0.0363;
	}
	else if (cunqi == 3)
	{
		lixi = 3.0 * benjin * 0.0402;
	}
	else if (cunqi == 5)
	{
		lixi = 5.0 * benjin * 0.0469;
	}
	else 
	{
		lixi = 8.0 * benjin * 0.0536;
	}
	printf("\nlixi = %.2lf yuan", lixi);
	return 0;
}