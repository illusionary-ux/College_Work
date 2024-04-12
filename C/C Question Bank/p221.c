/* 
程序的功能：
	从键盘读入一个字符串(约定：字符数≤127字节)，检查该字符串是否是回文。
所谓回文即正向与反向的拼写都一样，例如：adgda。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	int i, j, flag;
	
	/* 输入一串字符存放到数组str中 */
	printf("Please input string:");
	gets(str);
	
	/* 判断字符串是否是回文 */
	flag = 0;
	for (i=0, j=strlen(str)-1; i<j; i++, j--)  
	{
		if (str[i] != str[j]) 
		{
			flag = 1;
			break;
		}
	}

	/* 输出是否回文的信息 */
	if (1 == flag)
	{
		printf("%s bu shi hui wen.\n", str);
	}
	else
	{
		printf("%s shi hui wen.\n", str);
	}

	return 0;
}