#include<stdio.h>

int main(void)
{
	int num, i;

	printf("please input n: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		printf("* * * * *\n");
	}
	return 0;
}