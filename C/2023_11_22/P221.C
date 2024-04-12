#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], cpy[128];
	int i, len, flag = 0;

	printf("Please input string: ");
	gets_s(str);
	len = strlen(str);
	strcpy(cpy, str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != cpy[len - i - 1])
		{
			flag = 1;
		}
	}
	switch (flag)
	{
		case 1:
			printf("\n%s bu shi hui wen.", str);
			break;
		default:
			printf("\n%s shi hui wen.", str);

	}
	return 0;
}