#include <stdio.h> 
void fun (int x, int *px);
int main()
{ 
     int num, t;
     scanf("%d", &num);
     fun(num, &t);
     printf("The result is: %d\n", t);
     return 0;
}

/* 请在这里填写答案 */
void fun (int x, int *px)
{
	int flag1 = 0, num = 0, fenli, pow = 0, tem, flag2 = 0, i;
	if (x < 0)
	{
		x = -x;
		flag1 = 1;
	}
	tem = x;
	while (x > 0)
	{
		fenli = x % 10;
		if (fenli % 3 == 0)
		{
			flag2 = 1;
			for(i = 1; i <= pow; i++)
			{
				fenli = fenli * 10;
			}
			num += fenli;
			pow++;
		}
		x /= 10;
	}
	if (flag2)
	{
		if (flag1)
		{
			*px = -num;
		}
		else
		{
			*px = num;
		}
	}
	else
	{
		*px = tem;
	}
}
