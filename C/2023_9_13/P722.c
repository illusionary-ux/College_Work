#include<stdio.h>

int main(void)
{
	int year, month, day;
	
	printf("\nplease input a date: ");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("\nthe date is:%d/%02d/%02d",year, month, day);
	
	return 0;
}
