/*
程序的功能：
	输入整数m，将所有大于1小于整数m的素数存入所指定的数组中
	(数组最多只存放100个素数，超过则提示“overflow”)，
	输出素数的个数n及各素数——素数的输出格式为每个素数5列宽、右对齐、每行显示15个。
	若输入的m≤0，则提示“error”，程序终止。
*/

#include <stdio.h>

int main(void)
{
	int i = 0, m, n = 0, k, count = 0, num, flag, data[100];

	printf("input a number: ");
	scanf("%d", &m);

	if (m > 0) //输入的数m为正数
	{
		for (n = 2; n < m; n++) //从2开始依次取整数判断是否素数
		{
			flag = 1;
			for (k=2; k<=n-1; k++)
			{
				if (n % k == 0)
				{
					flag = 0;
					break;
				}
			}	

			if (1 == flag) //根据flag的值判断整数n是否是素数
			{				
				count++; //变量count用来记录素数的个数。如果是素数，则count的值增加1
			}
			
			if (count <= 100)  
			{
				if (1 == flag)
				{
					data[i] = n;  //如果素数的个数<=100，则将素数n存入数组data中
					i++;
				}
			}
			else //当n>100时，剩余的素数不需要再判断，停止循环
			{
				printf("overflow\n");
				break;
			}
		}
	
		if (count <= 100)
		{
			printf("n=%d\n", count);  //输出素数的个数count
			/* 按规定的格式输出count个素数 */
			for (i = 0, num = 0; i < count; i++)
			{
				printf("%5d", data[i]);
				num++;
				if ((num % 15 == 0) || (num == count))
				{
					printf("\n");
				}
			}
		}
	}
	
	else //输入的数m<=0， 则输出error
	{
		printf("error\n");
	}
	return 0;
}

