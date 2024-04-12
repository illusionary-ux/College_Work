#include <stdio.h>

int main(void)
{
	int a1, a2, i;
	
	printf("Please Input two number: ");
	scanf("%d %d", &a1, &a2);
	printf("\nResult: ");
	for (i = 0; i < a2; i++)
	{
		printf("%d/%d ", a1, a1+1);
		a1 = a1 - 11;
	}
	return 0;
}