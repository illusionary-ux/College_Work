/*
程序的功能：
	输入两个整数m和n，输出大于等于m（m>5）的n个素数，输出的各素数间以空格相隔。
注：素数(Prime Number)，亦称质数，指在一个大于1的自然数中，除了1和此整数自身外，
没法被其他自然数整除的数。

*/

#include <stdio.h>

int main(void)
{
	int m, n, i, flag, count = 0, number; //变量flag作为一个标志位，其值为1，是素数，为0，不是素数；变量count用来记录素数的个数

	printf("Input the m,n: ");
	scanf("%d,%d", &m, &n);

	printf("The result:\n");
	for (number=m; 1; number++) 
	{
		flag = 1; 
		/* 判断整数number是否素数，是素数，flag的值为1，不是素数，flag的值为0 */
		for (i=2; i<number; i++)
		{
			if (number % i == 0)
			{
				flag = 0;
				break;
			}
		}

		
		if (1 == flag)
		{
			printf("%d ", i); //如果i是素数，则输出i
			count++;  //如果i是素数，用来计数的变量count的值增加1
		}
		if (count == n) //如果已输出n个素数，则停止判断
		{
			break;
		}

	}

	return 0;
}
