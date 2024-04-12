/*
程序的功能：
从键盘上读入一行字符(约定：字符数≤127字节)，按以下方法将其加密变换：
　　　　A->Z   　a->z
　　　　B->Y   　b->y
　　　　C->X   　c->x
　　　　……   　……
　　　　Z->A   　z->a
　　即字母A变成Z、字母B变成Y...，非字母字符不变。最后在屏幕上先显示这一行字符的长度，
再显示生成的密文。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128];
	int i;

	/* 输入一个字符串存放到数组str中 */
	printf("Please input string:");
	gets(str1);

	/* 将数组str中的字符串进行加密变换 */
	for (i = 0; str1[i] != '\0'; i++)
	{
		/* 对小写字母进行加密 */
		if ((str1[i] >= 'a') && (str1[i] <= 'z'))  
		{
			str2[i] = 'a' + ('z' - str1[i]);
		}
		/* 对大写字母进行加密 */
		else if ((str1[i] >= 'A') && (str1[i] <= 'Z'))
		{
			str2[i] = 'A' + ('Z' - str1[i]);
		}
		else
		{
			str2[i] = str1[i]; //非字母不变
		}
	}
	str2[i] = '\0';

	/* 输出字符串的长度 */
	printf("zi fu chuan chang du: %d\n", strlen(str2));
	/* 输出密文 */
	printf("miwen:%s\n", str2);

	return 0;
}