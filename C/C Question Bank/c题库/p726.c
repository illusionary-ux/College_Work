#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch, i = 0;
	char string[101];

	printf("input a string: ");
	ch = getchar(); 
	while ((char)ch != '\n' && ch != EOF)
	{
		if (i < 100)
		{
			string[i] = (char)ch;
			i++;
		}
		else
		{
			break;
		}
		ch = getchar(); 
	}
	string[i] = '\0';

	printf("\nThe string lenth is: %d\n", i);
	printf("\nThe string is: %s\n", string);

	return 0;
}