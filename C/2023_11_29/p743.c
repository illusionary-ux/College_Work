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
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
