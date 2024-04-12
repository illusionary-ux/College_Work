#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[101], cpy[101], ch;
	int i, len, j = 0;

	printf("Please input a string: ");
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		ch = str[i];
		if (ch != '*')
		{
			cpy[j] = ch;
			j++;
		}
	}
	printf("\nThe result is: ");
	cpy[j] = '\0';
	printf("%s", cpy);
	return 0;
}