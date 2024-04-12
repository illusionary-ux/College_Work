#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[6], maxch;
	int max, i;
	
	gets(str);
	maxch = str[0];
	max = str[0];
	for (i = 1; i < 5; i++)
	{
		if (str[i] > maxch)
		{
			maxch = str[i];
			max = str[i];
		}
	}
	printf("%c %d", maxch, max);
	return 0;
}
