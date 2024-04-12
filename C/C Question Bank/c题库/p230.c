#include <stdio.h>

int main(void)
{
	int i, begin, count, num;

	printf("Please Input two number: ");
	scanf("%d %d", &begin, &count);

	printf("\nResult: ");

	num = 0;
	for (i = begin; num < count; i=i+5)
	{
		printf(" %d", i);
		num++;
	}

	return 0;
}


