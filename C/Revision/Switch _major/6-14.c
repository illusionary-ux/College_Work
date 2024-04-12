#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse( int number )
{ 
	int flag = 0, rev = 0;
	if (number < 0)
	{
		number = -number;
		flag = 1;
	}
	while (number > 0)
	{
		rev = rev * 10 + number % 10;
		number /= 10;
	}
	if (flag)
	{
		rev = -rev;
		return rev;
	}
	else
	{
		return rev;
	}
}
