#include<stdio.h>

int main(void)
{
	int num[16], i, tem, flag = 0;

	printf("请输入若干个数: ");
	for (i = 0; i < 16; i++)
	{
		scanf("%d", &tem);
		if (tem == -1)
		{
			break;
		}
		num[i] = tem;
		flag++;
		
	}
	printf("\n这些数倒序为: ");
	for (i = flag - 1; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}