#include<stdio.h>

int main(void)
{
	int side, volume, surface;
	
	printf("Input a side of cube: ");
	scanf("%d", &side);
	volume = side * side * side;
	surface = 6 * side * side;
	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", volume, surface);
	return 0;
}
