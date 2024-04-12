#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=3, lineLen<=80, 考生可在本行后添加代码、最多3行、行长<=80字符) */
void scanfArr(int *pi, int n);
int maxArr(int *pi, int n);
double aver(int *pi, int n);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int Data[20], n, max;
	double average;

	printf("Please input the number n = ");
	scanf("%d", &n);
	printf("Please input the array elements : ");
	scanfArr(Data, n);

	max = maxArr(Data, n);
	average = aver(Data, n);
	printf("\nmax = %d\naverage = %.2f\n", max, average);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void scanfArr(int *pi, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", pi + i);
	}
}

int maxArr(int *pi, int n)
{
	int i, max = *pi;
	
	for (i = 1; i < n; i++)
	{
		if (*(pi + i) > max)
		{
			max = *(pi + i);
		}
	}
	return max;
}

double aver(int *pi, int n)
{
	int i;
	double sum = 0;
	
	for (i = 0; i < n; i++)
	{
		sum += *(pi + i);
	}
	return sum / n;
}
