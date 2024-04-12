/* 程序的功能：
   用scanf输入10个整数（采用int数据类型），计算所有正数的和、负数的和以及10个数的和。
*/
#include <stdio.h>

int main(void)
{
	int x, zhengshu = 0, fushu = 0, count = 0; /* 变量x用来存放从键盘输入的数；
	变量zhengshu用来存放所有正数之和；变量fushu用来存放所有负数之和；
	变量count用来记录已经输入的数据个数*/

	printf("Input 10 integers.\n");
	/*从键盘输入10个整数，计算所有正数的和、负数的和 */
	do
	{
		scanf("%d", &x); //从键盘输入一个整数存放到变量x中
		count++; //count用来记录已经输入的数据个数
		/* 判断x，并加到相应的变量上 */
		if (x > 0) 
		{
			zhengshu = zhengshu + x; 
		}
		else
		{
			fushu = fushu + x;
		}
	} while (count < 10);    
	
	printf("zhengshu=%d,fushu=%d,all=%d\n", zhengshu, fushu, zhengshu + fushu); //输出计算结果

	return 0;
}
