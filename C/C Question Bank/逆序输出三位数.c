#include <stdio.h>

int main(void)
{
	int num, ge, shi, bai;  /*定义变量*/

	printf("请输入一个三位整数：\n");  /*在屏幕上输出提示语*/
	scanf("%d", &num);  /*从键盘输入一个三位整数赋给变量num*/
	ge = num % 10;  /*计算个位数字*/
	shi = num / 10 % 10;  /*计算十位数字*/
	bai = num /100 % 10; /*计算百位数字*/
	
	printf("逆序为：%d%d%d\n", ge, shi, bai);  /*输出结果*/

	return 0;
}