#include<stdio.h>

int main(void)
{
	char character;
	
	printf("Input a character: ");
	scanf("%c", &character);
	printf("\nAscii('%c') = 0x%x\n", character, character);
	
	return 0;
}
