/*
程序的功能：

    从键盘读入10个数存放在一个数组中，要求用户由小到大输入。
如果发现读入的某个数不是由小到大，则该数输入无效，继续读入后面的输入数据。
再将这10个数依次输出到屏幕上，要求每个数的输出宽度为5、不足5位的在其左边补上空格、
数与数之间使用逗号(,)分隔。然后输入一个数，要求找出该数是数组中第几个(序号从1开始计算)元素的值，
如果该数不在数组中，则输出“Not Find!”。
*/

#include <stdio.h>

int main(void)
{
	int i, n, flag, arr[10];

	/* 从键盘读入10个数存放在一个数组中，要求用户由小到大输入。
		如果发现读入的某个数不是由小到大，则该数输入无效，继续读入后面的输入数据。
	*/
	printf("please input 10 numbers:\n");
	scanf("%d", &arr[0]);
	
	for (i=1; i<10; i++)
	{
		scanf("%d", &arr[i]);
		while (arr[i] <= arr[i-1])
		{
			scanf("%d", &arr[i]);
		}
	}

	/* 将10个数依次输出到屏幕上，要求每个数的输出宽度为5、不足5位的在其左边补上空格、
			数与数之间使用逗号(,)分隔，最后一个数后没有逗号*/
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
		if (i < 9)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	
	/* 输入一个数，要求找出该数是数组中第几个(序号从1开始计算)元素的值，
		如果该数不在数组中，则输出“Not Find!”*/
	
	printf("input the num to look for:\n");
	scanf("%d", &n);
	flag = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == n)
		{
			printf("the position of %d is %d\n", n, i + 1);
			flag = 1;
			break;
		}
	}
	if (0 == flag)
	{
		printf("Not Find!\n");
	}

	return 0;
}
