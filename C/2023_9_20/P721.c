#include<stdio.h>

int main(void)
{
	float x, y, sum;
	int z1;
	
	printf("please input x,y,z: ");
	scanf("%f,%f,%d", &x, &y, &z1);
	sum = x + z1 % 3 * (int)( x + y ) % 2 / 4;
	printf("\nResult = %.6f", sum);
	return 0;
}
