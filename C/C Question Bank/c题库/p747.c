#include <stdio.h>

int main(void)
{
	int i, data, s[15];

	printf("please input 15 integer numbers:\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &s[i]);
	}

	printf("please input the integer you want to find: ");
	scanf("%d", &data);
	
	for (i = 0; i < 15; i++)
	{
		if (s[i] == data)
		{
			printf("\n%d has been found,it is a[%d]\n", s[i], i);
			break;
		}
	}

	if (i == 15)
	{
		printf("\n%d has not been found\n", data);
	}

	return(0);

}