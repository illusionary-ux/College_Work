#include<stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
void swap(int *numa, int *numb);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int numA, numB;

	printf("please input a and b: ");
	scanf("%d,%d", &numA, &numB);

	swap(&numA, &numB);
	printf("\na=%d, b=%d\n", numA, numB);

	return 0;
}

/* 本部分代码功能建议：实现子函数swap()，完成a和b的交换 */
/* User Code Begin(Limit: lines<=7, lineLen<=50, 考生可在本行后添加代码、最多7行、行长<=50字符) */
void swap(int *numa, int *numb)
{
	int temp;

	temp = *numa;
	*numa = *numb;
	*numb = temp;
}
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
