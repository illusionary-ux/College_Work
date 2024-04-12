#include <stdio.h>

int main(void)
{
	char cb, ce, i;

	printf("Please Input two char: ");
	scanf("%c%c", &cb, &ce);
	printf("\nResult: ");
	for (i = cb; i <= ce; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	return 0;
}