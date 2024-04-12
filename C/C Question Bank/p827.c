/* 从键盘输入3个可带空格的字符串
(约定：字符数≤127字节)，
输出长度最大的字符串的长度*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128], str3[128];
	int len1, len2, len3, max;

	printf("Please input the first string:\t");
	gets(str1); //输入第一个字符串
	len1 = strlen(str1); //计算第一个字符串的长度
	printf("Please input the second string:\t");
	gets(str2); //输入第二个字符串
	len2 = strlen(str2); //计算第二个字符串的长度
	printf("Please input the third string:\t");
	gets(str3); //输入第三个字符串
	len3 = strlen(str3); //计算第三个字符串的长度

	/* 比较三个字符串的长度，找出最大值并放在变量max中 */
	if (len1 > len2)
	{
		max = len1;
	}
	else
	{
		max = len2;
	}
	if (len3 > max)
	{
		max = len3;
	}
	
	printf("\n最长的字符串长度为：%d\n", max);

	return 0;

}