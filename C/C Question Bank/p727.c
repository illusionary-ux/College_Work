#include <stdio.h>

int main(void)
{
	int a, b, sum;

	printf("please input data: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("\nResult: %d +  %d =  %d\n", a, b, sum);
	
	return 0;
}