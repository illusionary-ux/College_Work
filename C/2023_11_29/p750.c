#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[101], ch, strnew[101];
	int len, i, tot = 0;
	
	printf("Please input a string: ");
	gets(str);
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		ch = str[i];
		if (ch != '*')
		{
			strnew[tot++] = ch;
		}
	}
	strnew[tot] = '\0';
	printf("\nThe result is: %s", strnew);
	return 0;
}
