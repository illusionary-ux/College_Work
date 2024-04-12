#include<stdio.h>

int main(void)
{
	int num[15], i, aim, flag = 0;

	printf("please input 15 integer numbers:\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d ", &num[i]);
	}
	printf("please input the integer you want to find: ");
	scanf("%d", &aim);
	for (i = 0; i <= 14; i++)
	{
		if (num[i] == aim)
		{
			printf("\n%d has been found,it is a[%d]\n", aim, i);
			flag++;
		}
	}
	if (flag == 0)
	{
		printf("\n%d has not been found\n", aim);
	}
	return 0;
}