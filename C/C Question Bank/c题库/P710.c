#include <stdio.h>

int main(void)
{
	char ch;

	printf("Input a lowercase letter: ");
	ch = getchar();	

	printf("\n%c(%d)", ch, ch);
	printf("\n%c(%d)", ch - 32, ch - 32);

	return 0;
}