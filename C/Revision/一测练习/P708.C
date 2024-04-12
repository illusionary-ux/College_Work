#include<stdio.h>

int main(void)
{
	int num, gw, sw, bw;

	printf("Input an integer: ");
	scanf("%d", &num);
	gw = num % 10;
	sw = num / 10 % 10;
	bw = num / 100;
	printf("\nThe result is %d%d%d", gw, sw, bw);
	return 0;
}