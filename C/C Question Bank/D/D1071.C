#include<stdio.h>

int IsPerfectNum(int num, int *pbNum);

int main(void)
{
	int i, j, count, factor[50];                                         
	
	for (i=2; i<=1000; i++)
	{
		/*********Found************/
		count = IsPerfectNum(i, factor);
		if (count > 0)
		{
			printf("%d =", i);
			/*********Found************/ 
			for (j=0; j<count-1; j++)
			{
				printf(" %d +", factor[j]);
			}
			printf(" %d\n", factor[j]);
		}
	}
	
   	return 0;
}

int IsPerfectNum(int num, int *pbNum)
{
	int k=num/2, sum=0, i, ret=0;           
	
	for (i=1; i<=k; i++)
	{
		if (num % i  ==  0)
		{
			sum = sum + i;
			*pbNum = i;	               
			/*********Found************/
			pbNum++;
			ret++;
		}   
	}
	if (sum != num)
	{
		ret = 0;
	}
	
	return ret;
}
