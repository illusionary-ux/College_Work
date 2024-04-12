#include <stdio.h>

int main(void)
{
	int z;
	float x, y;

	printf("please input x,y,z: ");
	scanf("%f,%f,%d", &x, &y, &z);	

	printf("\nResult = %f\n", x + z % 3 * (int)(x + y) % 2 / 4);
	
	return 0;
}