#include <stdio.h>

int main(void)
{
	int i, Begin, End;

	printf("Please Input two number: ");
	scanf("%d %d", &Begin, &End);

	printf("\nResult: ");

	for (i = Begin; i<=End; i++)
	{
		printf(" %d", i);
	}

	return 0;
}

