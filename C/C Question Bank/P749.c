#include <stdio.h>

int main(void)
{
	int num, hang, lie, shu[5][5]; 

	printf("Please input an integer: ");
	scanf("%d", &num);

	for (hang = 0; hang < 5; hang++)
	{
		for (lie = 0; lie < 5; lie++)
		{
			shu[hang][lie] = num + hang + lie; //根据题目给出的程序运行效果示例推断，数组元素的值为：num + hang（元素行标）+ lie（元素列标）
		}
	}
	for (hang = 0; hang < 5; hang++)
	{
		for (lie = 0; lie < 5; lie++) //该for循环的功能是输出一行
		{
			printf("%4d", shu[hang][lie]);
		}
		printf("\n"); //输完一行数据后换行
	}
	
	return 0;
}