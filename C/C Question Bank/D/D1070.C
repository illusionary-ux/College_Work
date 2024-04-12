#include<stdio.h>
#include<math.h>

#define FALSE 0
#define TRUE 1

int IsPrimeNumber(int m);

int main(void)
{
	int i, count=0;
	
	for (i=2; i<=10000; i++)
	{
		/*********Found************/
		if (IsPrimeNumber(i))
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	
	return 0;
}

int IsPrimeNumber(int m)
{
	int i, k;
	/*********Found************/
	int ret = TRUE;
	
	k = (int)sqrt(m);  
	for (i=2; i<=k; i++)
	{
		if (m % i  ==  0)
		{
			ret = FALSE;
			break;
		}
	}
	
	/*********Found************/
	return ret;
}
