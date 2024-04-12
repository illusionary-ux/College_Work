#include <stdio.h>

int main(void)
{
	char a1, a2, i;
	
	printf("Please Input two char: ");
	scanf("%c%c", &a1, &a2);
	printf("\nResult: ");
	
	for (i = a1; i > a2 - 1; i--)
	{
		printf("%c", i);
		printf("%c, ", i + 1);
	}
	printf("\n");
	return 1;
}