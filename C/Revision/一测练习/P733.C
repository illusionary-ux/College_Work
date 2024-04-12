#include<stdio.h>

int main(void)
{
	char c1;

	printf("Input a character: ");
	scanf("%c", &c1);
	printf("\nAscii('%c') = 0x%x\n", c1, c1);
	return 0;
}