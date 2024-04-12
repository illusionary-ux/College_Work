#include<stdio.h>

int main(void)
{
	int benjin, cunqi;
	double lixi;

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &benjin, &cunqi);
	switch (cunqi)
	{
		case 1:
			lixi = benjin * cunqi * 0.0315;
		case 2:
			lixi = benjin * cunqi * 0.0363;
		case 3:
			lixi = benjin * cunqi * 0.0402;
		case 5:
			lixi = benjin * cunqi * 0.0469;
		case 8:
			lixi = benjin * cunqi * 0.0536;


	}
	printf("\nlixi = %.2lf yuan", lixi);
	return 0;
}