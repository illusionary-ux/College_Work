#include <stdio.h>

int main(void)
{
	float F = 69, C;  /* 定义变量 */

	C = (float)(5.0 / 9 * (F - 32));  /* 根据公式计算摄氏温度 */
	printf("摄氏温度为：%.2f\n", C);  /* 输出摄氏温度 */

	return 0;
}