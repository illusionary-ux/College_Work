#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	int zimu = 0, shuzi = 0, kongge = 0, qita = 0, i, tot;

	printf("Please input string: ");
	gets(str);
	tot = strlen(str);
	for (i = 0; i < tot; i++)
	{
		if (str[i] == ' ')
		{
			kongge++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			shuzi++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			zimu++;
		}
		else
		{
			qita++;
		}
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);
	return 0;
}