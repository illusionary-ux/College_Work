#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int find (int x[], int n, int aim);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请输入一个欲查找的数：");
	scanf("%d", &searchVal);

	positionA = find(arrA, 5, searchVal);  /* userCode(<50字符): 调用函数查找searchVal在arrA中的下标 */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB = find(arrB, 8, searchVal);  /* userCode(<50字符): 调用函数查找searchVal在arrB中的下标 */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int find (int x[], int n, int aim)
{
	int i, flag = 0;
	
	for (i = 0; i < n; i++)
	{
		if (x[i] == aim)
		{
			flag = 1;
			return i;
		}
	}
	return -1;
}


