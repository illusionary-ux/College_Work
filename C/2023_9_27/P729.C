#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("please input x, y: ");
	scanf("%d,%d", &num1, &num2);
	if (num1 < num2)
	{
		printf("\n%d is bigger\n", num2);
	}
	else
	{
		printf("\n%d is bigger\n", num1);
	}
	return 0;
}