/* 从键盘输入3个可带空格的字符串
(约定：字符数≤127字节)，
输出最大的字符串。*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128], str3[128], maxstr[128];
	
	printf("Please input the first string:\t");
	gets(str1); //输入第一个字符串
	printf("Please input the second string:\t");
	gets(str2); //输入第二个字符串
	printf("Please input the third string:\t");
	gets(str3); //输入第三个字符串
	
	/*比较三个字符串的大小，将最大的字符串存放在数组maxstr中 */
	if (strcmp(str1, str2) > 0)
	{
		strcpy(maxstr, str1);
	}
	else
	{
		strcpy(maxstr, str2);
	}
	if (strcmp(str3, maxstr) > 0)
	{
		strcpy(maxstr, str3);
	}
	
	printf("\n最大字符串是：%s\n", maxstr);

	return 0;

}