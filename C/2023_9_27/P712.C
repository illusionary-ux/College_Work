#include<stdio.h>

int main(void)
{
	int num;

	printf("Please input an integer: ");
	scanf("%d", &num);
	if (num % 5 == 0 && num % 7 == 0)
	{
		printf("\nYes.");
	}
	else
	{
		printf("\nNo.");
	}
	return 0;
}