#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[128], a2;
	int i, j, m;

	printf("input the string: ");
	for (i = 0; i < 128; i++)
	{
		scanf("%c", &a1[i]);
		if (a1[i] == '\n')
		{
			break;
		}
	}
	a1[i] = 0;
	m = strlen(a1);
	for (i = 0; i < m-1; i++)
	{
		for (j = 0; j < m-1-i; j++)
		{
			if (a1[j] > a1[j+1])
			{
				a2 = a1[j];
				a1[j] = a1[j+1];
				a1[j+1] = a2;
			}
		}
	}
	printf("\nResult: %s", a1);
	return 0;

}