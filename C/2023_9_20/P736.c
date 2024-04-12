#include<stdio.h>

int main(void)
{
	int sum, thousand, hundred, ten, one, num;
	
	printf("Input a number with 4-digit: ");
	scanf("%d", &sum);
	thousand = sum / 1000;
	one = sum % 10;
	hundred = sum / 100 % 10;
	ten = sum / 10 % 100 % 10;
	num = one + ten + hundred + thousand;
	printf("\nsum=%d\n", num);
	return 0;
}
