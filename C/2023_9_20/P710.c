#include<stdio.h>

int main(void)
{
	char ch,ch2;
	int x;
	printf("Input a lowercase letter: ");
	scanf("%c", &ch);
	x = (int)ch - 32;
	ch2 = (char)x;
	printf("\n%c(%d)\n%c(%d)\n", ch, ch, ch2, x);
	return 0;
}
