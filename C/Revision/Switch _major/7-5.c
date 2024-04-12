#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	int len, i, tem, flag = 0;
	int num[10] = {0};
	
	gets(str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tem = str[i] - '0';
			num[tem]++;
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		if (num[i] > 0)
		{
			if (flag == 1)
			{
				printf("\n");
			}
			printf("%d-%d", i, num[i]);
			
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("None!");
	}
	
	return 0;
}
