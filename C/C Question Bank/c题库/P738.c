#include <stdio.h>

int main(void)
{
	float shu1, shu2;

	printf("Input 2 numbers: ");
	scanf("%f%f", &shu1, &shu2); //输入

	if (shu2 != 0) //除数不为零
	{
		printf("\nThe result is: %.2f\n", shu1 / shu2);
	}
	else //除数为零
	{
		printf("\nDivid by zero");
	}
	
	return 0;
}