#include <stdio.h>

int fum(int in[]);  /* userCode(<50字符): 自定义函数1之原型声明 */
void fun(int in[], int in1);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16], count;

	printf("请输入若干个数: ");
	count = fum(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	fun(num, count);  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fum(int in[])
{
	int in1, count = 0;

	for (in1 = 0; in1 < 16; in1++)
	{
		scanf("%d", &in[in1]);
		if (in[in1] == -1)
		{
			break;
		}
		count++;
	}
	return count;
}

void fun(int in[], int in1)
{
	int in2;

	for (in2 = 0; in2 < in1; in2++)
	{
		printf("%d ", in[in1 - in2 - 1]);
	}
}