#include<stdio.h>

int main(void)
{
	int num, i1;
	double sum = 1, he = 0;

	printf("Please input n: ");
	scanf("%d", &num);
	/*for (i1 = 1; i1 <= num; i1++)
	{
		for (i2 = 1; i2 <= i1; i2++)
		{
			sum = 1 / i2 * sum;
			
		}
		he += sum;
	}*/
	
	
	for (i1 = 1; i1 <= num; i1++)
	{
		sum = 1 / (double)i1 * sum;
		he = he + sum;
	}
	
	/*for (i1 = 1; i1 <= num; i1++)
	{
		sum = sum * 1 / i1;
		he = he + sum;
	}*/
	printf("\nS=1/1!+1/2!+...+1/%d!=%.16f", num, he);
	return 0;
}