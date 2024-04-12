#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
float fun(float arr[], int m, int *n);

int main(void)
{
	float arr1[6], arr2[8], arr3[12], sumA, sumB, sumC;
	int gt70A, gt70B, gt70C;
	
	sumA = fun(arr1, 6, &gt70A);  /* userCode(<80字符): 调用函数读 6个数到arr1中，并计算和及>70的个数 */
	sumB = fun(arr2, 8, &gt70B);  /* userCode(<80字符): 调用函数读 8个数到arr2中，并计算和及>70的个数 */
	sumC = fun(arr3, 12, &gt70C);  /* userCode(<80字符): 调用函数读12个数到arr3中，并计算和及>70的个数 */

	printf("\narr1[ 5]=%4.1f, sum(arr1)=%5.1f, cnt(arr1)=%d",   arr1[5],  sumA, gt70A);
	printf("\narr2[ 7]=%4.1f, sum(arr2)=%5.1f, cnt(arr2)=%d",   arr2[7],  sumB, gt70B);
	printf("\narr3[11]=%4.1f, sum(arr3)=%5.1f, cnt(arr3)=%d\n", arr3[11], sumC, gt70C);
	
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
float fun(float arr[], int m, int *n)
{
	int i;
	float sum = 0;

	*n = 0;
	printf("请输入%2d个数: ", m);
	for (i = 0; i < m; i++)
	{
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < m; i++)
	{
		sum = sum + arr[i];
		if (arr[i] > 70)
		{
			(*n)++;
		}
	}
	return sum;
}