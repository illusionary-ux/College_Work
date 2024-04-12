#include<stdio.h>

int main(void)
{
	int num1, num2, i1, i2, flag;

	printf("Input the m, n: ");
	scanf("%d,%d", &num1, &num2);
	printf("\nThe result:\n");
	for (i1 = 0; i1 < num2; num1++ )//控制输出和次数
	{
		for (i2 = 2, flag = 0; i2 <= num1 - 1; i2++)//控制查找
		{
			if (num1 % i2 == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", num1);
			i1++;
		}
	}
	
	return 0;
}