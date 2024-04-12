#include<stdio.h>

int main(void)
{
	int i, a1;
	char c1;
	
	printf("Please Input a char and a number: ");
	scanf("%c %d", &c1, &a1);
	printf("\nResult: ");
	for (i = a1; i >= 1; i--)
	{
		printf("%c", c1);
		c1 = c1 - 1;
	}
	printf("\n");
	return 1;
}