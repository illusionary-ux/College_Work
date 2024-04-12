#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void arra(int arr[], int in2);

int main(void)
{
	int arrA[5], arrB[8];

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	printf("\narrA = ");
	arra(arrA, 5); /* userCode(<30字符): 调用函数输出arrA的所有元素 */
	printf("\narrB = ");
	arra(arrB, 8);  /* userCode(<30字符): 调用函数输出arrB的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void arra(int arr[], int in2)
{
	int in1;

	for (in1 = 0; in1 < in2; in1++)
	{
		printf("%d ", arr[in1]);
	}
}
