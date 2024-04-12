#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], ch;
	int i, dig = 0, let = 0, sym = 0, tot;
	char di[128], le[128], sy[128];

	printf("Please intput the string: ");
	for (i = 0; i < 128; i++)
	{
		ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		else
		{
			str[i] = ch;
		}
	}
	tot = i;
	for (i = 0; i < tot; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			di[dig] = str[i];
			dig++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			le[let] = str[i];
			let++;
		}
		else
		{
			sy[sym] = str[i];
			sym++;
		}
	}
	di[dig] = '\0';
	le[let] = '\0';
	sy[sym] = '\0';
	printf("\nDigistal string length = %d, Digitals: %s\n", dig, di);
	printf("Letter string length = %d, Letters: %s\n", let, le);
	printf("Symbol string length = %d, Symbols: %s\n", sym, sy);
	return 0;
}