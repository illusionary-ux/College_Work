#include<stdio.h>

int main(void)
{
	float num1, num2, num3;

	printf("Input 2 numbers: ");
	scanf("%f %f", &num1, &num2);
	if (num2 == 0)
	{
		printf("\nDivid by zero");
	}
	else 
	{
		(float)num3 = num1 / num2;
		printf("\nThe result is: %.2f", num3);
	}
	return 0;
}