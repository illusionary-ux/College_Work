#include<stdio.h>

int fx(int n);
int main(void)
{
	int n;
	
	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);
	
	printf("\nf(%d)=%d\n", n, fx(n));
	return 0;
}

int fx(int n)
{
	if (n == 0 || n == 1 || n== 2)
	{
		return n;
	}
	else
	{
		return 2 * fx(n - 1) + fx(n - 2) * fx(n - 3);
	}
}
