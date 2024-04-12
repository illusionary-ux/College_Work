#include <stdio.h>

int main(void)
{
	int a1, b1, i;

	printf("Please Input two number: ");
	scanf("%d %d", &a1, &b1);
	printf("\nResult: ");
	for (i = 1; i <= b1; i++)
	{
		printf("%d-%d ", i, a1 - (i - 1));
	}
	printf("\n");
	return 0;
}