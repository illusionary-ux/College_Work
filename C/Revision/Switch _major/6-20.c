#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double mypow( double x, int n )
{
	int i;
	double result = x;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for(i = 1; i < n; i++)
		{
			result = result * x;
		}
		return result;
	}
}
