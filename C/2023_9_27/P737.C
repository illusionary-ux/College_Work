#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2, num3, biggest;

	printf("Input 3 numbers: ");
	scanf("%d, %d, %d,", &num1, &num2, &num3);
	if (abs(num1) < abs(num2))
	{
		biggest = num2;
	}
	else
	{
		biggest = num1;
	}
	if (abs(biggest) < abs(num3))
	{
		biggest = num3;
	}
	printf("\nThe number with maximum absolute value is %d.\n", biggest);

	return 0;
}