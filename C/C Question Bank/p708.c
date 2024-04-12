#include <stdio.h>

int main(void)
{
	int x, ge, shi, bai;

	printf("Input an integer:");
	scanf("%d", &x);
	
	if ((x >= 100) && (x < 1000))
	{
		ge = x % 10;
		shi = (x - ge) / 10 % 10;
		bai = x / 100;
		printf("The result is %d%d%d\n", ge, shi, bai);
	}
	else
	{
		printf("data error.\n");
	}
	
	return 0;
}