#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=3, lineLen<=80, 考生可在本行后添加代码、最多3行、行长<=80字符) */
void scanfArr(int *data, int m);
int maxArr(int *data, int m);
double aver(int *data, int m);
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
void scanfArr(int *data, int m)
{
	int i;

	for (i=0; i<m; i++)
	{
		scanf("%d", data+i);
	}
}

int maxArr(int *data, int m)
{
	int i, max;

	max = *(data + 0);
	for (i=0; i<m; i++)
	{
		if (max < *(data+i))
		{
			max = *(data + i);
		}
	}

	return max;
}

double aver(int *data, int m)
{
	int i, sum = 0;
	double average;

	for (i=0; i<m; i++)
	{
		sum = sum + *(data + i);
	}
	average = (double)sum / m;

	return average;
}
