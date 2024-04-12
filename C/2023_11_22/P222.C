#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], cpy[128], ch;
	int len, i, j = 0;

	printf("Please input string: ");
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		ch = str[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = 155 - ch;
			cpy[j] = ch;
			j++;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			ch = 219 - ch;
			cpy[j] = ch;
			j++;
		}
		if ((ch >= 'A' && ch <= 'Z') == 0 && (ch >= 'a' && ch <= 'z') == 0)
		{
			cpy[j] = ch;
			j++;
		}
	}
	cpy[j] = '\0';
	printf("\nzi fu chuan chang du: %d", len);
	printf("\nmi wen: %s", cpy);
	return 0;
}