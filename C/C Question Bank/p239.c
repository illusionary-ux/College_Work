#include <stdio.h>

int main(void)
{
	int a1[16], count = 0, i;

	printf("请输入若干个数: ");
	for (i = 0; i < 16; i++)
	{
		scanf("%d", &a1[i]);
		if (a1[i] == -1)
		{
			break;
		}
		count ++;
	}
	printf("\n这些数倒序为: ");
	for (i = count - 1; i >= 0; i--)
	{
		printf("%d ", a1[i]);
	}
	return 0;
}