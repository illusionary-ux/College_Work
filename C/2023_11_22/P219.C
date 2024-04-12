#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], num[128];
	int i, tot, tot_num = 0;

	printf("Please input string: ");
	gets(str);
	tot = strlen(str);
	for (i = 0; i < tot; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num[tot_num] = str[i];
			tot_num++;
		}
	}
	printf("\nshu zi ge shu wei: %d", tot_num);
	num[tot_num] = '\0';
	printf("\nshu zi wei: %s", num);
	return 0;
}