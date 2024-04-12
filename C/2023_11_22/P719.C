#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[5][81], tem[81];
	int i, j;

	printf("Input 5 strings:\n");
	for (i = 0; i < 5; i++)
	{
		gets(str[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (strcmp(str[j], str[i]) < 0)
			{
				strcpy(tem, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], tem);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", str[i]);
	}
	return 0;
}