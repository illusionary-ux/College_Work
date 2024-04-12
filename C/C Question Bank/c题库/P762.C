#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
int FindMin(int num[], int n, int *pMinPos);


/* User Code End(考生添加代码结束) */

int main(void)
{
	int num[10], i, MinVal, MinPos;

	printf("Input 10 integers.\n");
	for (i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}

	MinVal = FindMin(num, 10, &MinPos);
	printf("MinVal=%d MinPos=%d\n", MinVal, MinPos);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数FindMin，行数不限) */

/* 该函数的功能是：在数组num的n个元素中找出最小值，该最小值作为函数FindMin的函数值由return返回，
同时将该最小值的元素下标存放到指针变量pMinPos所指向的变量中 */
int FindMin(int num[], int n, int *pMinPos)
{
	int i, minval; //变量minval用来存放最小值

	minval = num[0]; //将第一个元素num[0]的值赋给变量minval
	*pMinPos = 0;  //将下标0赋给指针变量pMinPos所指向的变量MinPos
	for (i=1; i<n; i++)
	{
		if (num[i] < minval) 
		{
			minval = num[i]; //将元素num[i]的值赋给变量minval作为新的最小值
			*pMinPos = i; //将新的最小值的元素下标i赋给指针变量pMinPos所指向的变量MinPos
		}
	}
	
	return minval; 
}
