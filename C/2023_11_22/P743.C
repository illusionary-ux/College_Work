#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	int i, len;

	printf("Input a string: ");
	gets(str);
	len = strlen(str);
	printf("\nThe result is: ");
	for (i = 0; i < len; i++)
	{
		printf("%c", str[len - i - 1]);
	}
	return 0;
}