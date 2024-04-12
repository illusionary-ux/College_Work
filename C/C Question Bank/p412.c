/*
程序的功能：

编写一程序P4-412.C实现以下功能
　　①程序运行时先显示Please input numbers:，再从键盘上读入一组整数(只考虑int型)，
		数与数之间只使用空格或回车作分隔。数可正可负，最多10000个，但若读入的数为-222时，
		则表示输入结束且-222不算在该组数内。
　　②对这一组数按从小到大的顺序进行排序。
　　③将排序后的这一组数输出到屏幕上，输出格式为每行6个数，数与数之间使用逗号(,)分隔，
		两个逗号之间的宽度(不算逗号)为6且使用左对齐格式。注意，行尾没有逗号。

*/

#include<stdio.h>

int main(void)
{
	int i, j, num = 0, tmp, count, data[10000];

	/* 从键盘上读入一组整数，最多10000个，但若读入的数为-222时，
	则表示输入结束且-222不算在该组数内 */
	printf("Please input numbers:");
	for (i = 0; i < 10000; i++)
	{
		scanf("%d", &tmp);
		if (tmp != -222)    //读入的数不是-222时，将该数存放到数组data中
		{
			data[i] = tmp; 
			num++;
		}
		else   //读入的数是-222，输入结束
		{
			break;
		}
	}
	
	/* 对数组data中的num个数用气泡法按从小到大排序 */
	for (j = 1; j <= num - 1; j++)
	{
		for (i = 1; i <= num - j; i++)
		{
			if (data[i-1] > data[i])
			{
				tmp = data[i-1];
				data[i-1] = data[i];
				data[i] = tmp;
			}

		}
	}

	/* 输出排好序的num个数 */
	printf("Output:\n");
	for (i = 0, count = 0; i < num; i++)
	{
		printf("%-6d", data[i]);
		count++;  //count用来统计已输出整数的个数
		/* 如果当前行已输出6个数，或当前行是最后一行并已输出最后一个数据，
			则换行，否则输出逗号 */
		if ((count % 6 == 0) || (count == num)) 
		{
			printf("\n");
		}
		else 
		{
			printf(",");
		}
	}
	
	return 0;
}