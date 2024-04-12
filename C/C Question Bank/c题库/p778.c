#include <stdio.h>
#include <string.h>

int main(void)
{
	char yiqian[81], yihou[81]; //数组yiqian存放从键盘输入的字符串，数组yihou存放移动后的字符串
	int i, j, n, length;

	printf("Please input the string: ");
	gets(yiqian); //从键盘输入字符串存放在数组yiqian中
	printf("Please input n: ");
	scanf("%d", &n); //输入需要移位的值赋给变量n

	length = strlen(yiqian); //计算数组yiqian中存放的字符串长度，并将该长度存放在变量length中

	n = n % length; //计算需要移位的值

	/* 以下for循环功能：将数组yiqian中字符串的最后n个字符存放到数组yihou的前n个元素中 */
	for (i = length - n, j = 0; i <= length - 1; i++, j++)
	{
		yihou[j] = yiqian[i];
	}

	/* 以下for循环功能：将数组yiqian中字符串的最前面length-n个字符存放到数组yihou中，从第n+1个元素开始存放 */
	for (i = 0, j = n; i <= length - n - 1; i++, j++)
	{
		yihou[j] = yiqian[i];
	}
	yihou[j] = '\0'; //添加字符串结束标志

	printf("\nThe result is: %s\n", yihou); //输出移动后的字符串

	return 0;
}