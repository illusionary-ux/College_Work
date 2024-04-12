#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int find(int *in, int in1); 

int main(void)
{
	int arrayA[6], arrayB[10], arrayC[15], sumA, sumB, sumC;

	sumA = find(arrayA, 6);  /* userCode(<50字符): 调用函数读 6个数到arrayA中，并计算和 */
	sumB = find(arrayB, 10);  /* userCode(<50字符): 调用函数读10个数到arrayB中，并计算和 */
	sumC = find(arrayC, 15);  /* userCode(<50字符): 调用函数读15个数到arrayC中，并计算和 */

	printf("\narrayA[0]=%3d, arrayA[ 5]=%3d, sum(arrayA)=%d", arrayA[0], arrayA[5], sumA);
	printf("\narrayB[0]=%3d, arrayB[ 9]=%3d, sum(arrayB)=%d", arrayB[0], arrayB[9], sumB);
	printf("\narrayC[0]=%3d, arrayC[14]=%3d, sum(arrayC)=%d\n", arrayC[0], arrayC[14], sumC);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int find(int *in, int in1)
{
	int in2, sum = 0;
	
	printf("请输入%d个数: ", in1);
	for (in2 = 0; in2 < in1; in2++)
	{
		scanf("%d", &in[in2]);
		sum += in[in2];
	}
	return sum;
}