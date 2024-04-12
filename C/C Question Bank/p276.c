#include <stdio.h>

int main(void)
{
	char a1, a2;
	int i;

	printf("Please Input two char: ");
	scanf("%c%c", &a1, &a2);
	printf("\nResult: ");
	for (i = a1; i >=a2; i--)
	{
		printf("%c%c%c, ", i, i+1, i+2);
	}
	return 0;
}