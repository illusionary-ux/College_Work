#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], ch;
	int i, j = 0, len, num[127] = {0}, tot = 0, max = 0;
	
	printf("please input a string:\n");
	gets(str);
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		ch = str[i];
		if (ch != ' ')
		{
			tot++;
		}
		else
		{
			if (tot > 0);
			{
				num[j++] = tot;
				tot = 0;
			}	
		}
	}
	if (tot > 0)
	{
		num[j] = tot;
	}
	for (i = 0; i <= j; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	printf("\nmax_length of the string is: %d\n", max);
	return 0;
}
