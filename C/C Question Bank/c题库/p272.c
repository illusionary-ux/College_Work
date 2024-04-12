#include <stdio.h>
#include <string.h>

int main(void)
{
	char a1[128], a2[128], a3[128], a4[128], a5[128];
	int i, j, sz = 0, xzm = 0, dzm = 0, qt = 0;

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
			a3[xzm] = a1[i];
			xzm++;
		}
		else if (a1[i] >= 'A' && a1[i] <= 'Z')
		{
			a4[dzm] = a1[i];
			dzm++;
		}
		else
		{
			a5[qt] = a1[i];
			qt++;
		}
	}
	a2[sz] = 0;
	a3[xzm] = 0;
	a4[dzm] = 0;
	a5[qt] = 0;
	printf("\nDigistal string length = %d, Digitals: %s\n", sz, a2);
	printf("azLetter string length = %d, azLetters: %s\n", xzm, a3);
	printf("AZLetter string length = %d, AZLetters: %s\n", dzm, a4);
	printf("Symbol string length = %d, Symbols: %s\n", qt, a5);
	return 0;
}