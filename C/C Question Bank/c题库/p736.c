#include <stdio.h>

int main(void)
{
	int x, ge, shi, bai, qian, sum;

	printf("Input a number with 4-digit:");
	scanf("%d", &x);
	
	qian = x / 1000;
	bai = (x - qian * 1000) / 100;
	ge = x % 10;
	shi = (x - ge) / 10 % 10;
	sum = qian + bai + ge + shi;
	
	printf("sum=%d\n", sum);

	return 0;
}