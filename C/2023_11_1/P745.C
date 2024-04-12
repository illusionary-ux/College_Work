#include<stdio.h>

int main(void)
{
	int m1, n1, i1, biggest, i2;

	printf("please input two integer numbers: ");
	scanf("%d %d", &m1, &n1); 
	if (m1 != n1) 
	{
		if (m1 < n1)
		{
			biggest = n1 + 1;
		}
		else 
		{
			biggest = m1 + 1;
		}
		for (i1 = biggest; i1 % m1 != 0 || i1 % n1 != 0; i1++)
		{
			;
		}

	
		biggest = biggest - 2;
		for (i2 = biggest; m1 % i2 != 0 || n1 % i2 != 0; i2--)
		{
			;
		}
		printf("\nthe greatest common divisor is %d", i2);
		printf("\nthe least common multiple is %d", i1);

	}
	else
	{
		printf("\nthe greatest common divisor is %d", m1);
		printf("\nthe least common multiple is %d", n1);
	}
	
	return 0;
}