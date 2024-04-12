#include <stdio.h>

int main(void)
{
	int a1, a2, i;

	printf("Please Input two number: ");
	scanf("%d %d", &a1, &a2);
	printf("\nResult: ");
	for (i = a1; i >= a2; i--)
	{
		printf("%d/%d ", i, i+1);
	}
	return 0;
}