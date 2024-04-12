/*
程序的功能：
	输入字符串s(约定：字符数≤100字节)，将字符串s中所有字符‘*’删除，
并将修改后的字符串显示出来。
*/
#include <stdio.h>

int main(void)
{
	int i, j;
	char str1[101], str2[101];

	printf("Please input a string: ");
	gets(str1); //输入字符串，并存放到数组str1中
	
	/* 删除数组str1中的字符串中的*号，并将已删除了*号的新字符串存放到数组str2中 */
	for (i=0, j=0; str1[i]!='\0'; i++)
	{
		if (str1[i] != '*')
		{
			str2[j] = str1[i]; 
			j++;
		}
	}
	str2[j] = '\0'; //在数组str2中的最后一个字符末尾添加字符串结束标志'\0'
	puts(str2); //输出数组str2中的新字符串

	return 0;
}