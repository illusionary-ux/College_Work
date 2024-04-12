/* 
程序的功能： 
	现有两个一维数组（各含5个整型元素）设为A、B，
从键盘分别输入数据给这两个数组。计算A数组正序位置与B数组逆序对应位置积的和。
*/
#include <stdio.h>

int main(void)
{
	int i, j, sum = 0, A[5], B[5];

	/* 输入5个整数存放在数组A中 */
	printf("Input A:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	/* 输入5个整数存放在数组B中 */
	printf("Input B:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &B[i]);
	}

	/* 计算A数组正序位置与B数组逆序对应位置积的和 */
	for (i = 0, j = 4; i < 5 && j>=0; i++, j--)
	{
		sum = sum + A[i] * B[j];
	}
	printf("sum=%d\n", sum);

	return 0;
}