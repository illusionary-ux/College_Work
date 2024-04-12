#include<stdio.h>

int main(void)
{
	int num1[5], num2[5], sum = 0, i;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + num1[i] * num2[4-i];
	}
	printf("\nsum=%d", sum);
	return 0;
}
