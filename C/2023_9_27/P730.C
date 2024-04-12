#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("please input x y: ");
	scanf("%d %d", &num1, &num2);
	if (num1 == num2)
	{
		printf("\nyes");
	}
	else 
	{
		printf("\nno");
	}
	return 0;
}