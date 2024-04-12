#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int find(int in[], int in1);

int main(void)
{
	int arrA[5], arrB[8], maxPosA, maxPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxPosA = find(arrA, 5);  /* userCode(<30字符): 调用函数计算arrA中元素的最大值所在的下标 */
	printf("\nmaxPos(arrA) = %d", maxPosA);
	maxPosB = find(arrB, 8);  /* userCode(<30字符): 调用函数计算arrB中元素的最大值所在的下标 */
	printf("\nmaxPos(arrB) = %d\n", maxPosB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int find(int in[], int in1)
{
	int in2, temp = in[0], in3 = 0;
	
	for (in2 = 1; in2 < in1; in2++)
	{
		if (temp < in[in2])
		{
			temp = in[in2];
			in3 = in2;
		}
	}
	return in3;
}


