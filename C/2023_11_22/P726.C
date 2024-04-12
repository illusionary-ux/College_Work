#include<stdio.h>

int main(void)
{
	char str[101];
	int len, i, ch;

	printf("input a string: ");
	for (i = 0; i < 100; i++)
	{
		ch = getchar();
		if (ch == EOF || ch == '\n')
		{
			break;
		}
		else
		{
			str[i] = ch;
		}
	}
	len = i;
	printf("\nThe string lenth is: %d", i);
	printf("\nThe string is: ");
	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	return 0;
}