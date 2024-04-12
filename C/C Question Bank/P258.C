#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[128], a2[128], a3[128], a4[128];
	int sz = 0, zm = 0, qt = 0, i, j;

	printf("Please intput the string: ");
	gets(a1);
	j = strlen(a1);
	for (i = 0; i < j; i++)
	{
		if (a1[i] >= '0' && a1[i] <= '9')
		{
			a2[sz] = a1[i];
			sz++;
		}
		else if (a1[i] >= 'a' && a1[i] <= 'z')
		{
			a3[zm] = a1[i];
			zm++;
		}
		else if (a1[i] >= 'A' && a1[i] <= 'Z')
		{
			a3[zm] = a1[i];
			zm++;
		}
		else
		{
			a4[qt] = a1[i];
			qt++;
		}
	}
	a2[sz] = 0;
	a3[zm] = 0;
	a4[qt] = 0;
	printf("\nDigistal string length = %d, Digitals: %s\n", sz, a2);
	printf("Letter string length = %d, Letters: %s\n", zm, a3);
	printf("Symbol string length = %d, Symbols: %s\n", qt, a4);
	return 0;
}