#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int find(int in[], int in1, int num);

int main(void)
{
	int arrA[5], arrB[8], num, maxPosA, maxPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	maxPosA = find(arrA, 5, num);  /* userCode(<50字符): 调用函数查找在arrA中小于num的最大数所在的下标 */
	if (-1 == maxPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nmaxPos(arrA) = %d", maxPosA);
	}

	maxPosB = find(arrB, 8, num);  /* userCode(<50字符): 调用函数查找在arrB中小于num的最大数所在的下标 */
	if (-1 == maxPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nmaxPos(arrB) = %d\n", maxPosB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int find(int in[], int in1, int num)
{
	int in2, in3, temp, in4[8];
	
	for (in2 = 0; in2 < in1; in2++)
	{
		in4[in2] = in[in2];
	}
	for (in2 = 0; in2 < in1 - 1; in2++)
	{
		for (in3 = 0; in3 < in1 - 1 - in2; in3++)
		{
			if (in[in3] > in[in3 + 1])
			{
				temp = in[in3];
				in[in3] = in[in3 + 1];
				in[in3 + 1] = temp;
			}
		}
	}
	for (in2 = 1; in2 < in1; in2++)
	{
		if (in[0] >= num)
		{
			return - 1;
		}
		else 
		{
			if (in[in2] >= num)
			{
				for (in3 = 0; in3 < in1; in3++)
				{
					if (in[in2 - 1] == in4[in3])
					{
						return in3;
					}
				}
			}
		}
	
	}
	return - 1;
}


