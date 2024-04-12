/* 
程序的功能：
	在一个已知的字符串(约定：字符数≤127字节)中查找最长单词，输出最长单词的长度。
　　注意事项：
　　(1)只考虑输入的字符串中仅含空格和其它可见字符，仅用空格来分隔不同单词。
　　(2)字符串中可能只有1个单词。
　　(3)字符串中可能1个单词都没有，此时最长单词的长度为0。
*/

#include <stdio.h>

int main(void)
{
	char str[128];
	int i, num = 0, maxlen = 0; //num用来记录某个单词的长度，maxlen用来记录最长单词的长度

	printf("please input a string:\n");
	gets(str); //输入一个字符串，并存放到数组str中


	for (i=0; str[i]!='\0'; i++)
	{
		/* 统计一个单词的长度，该长度存于变量num中 */
		if (str[i] != ' ')
		{
			num++;
		}
		/* 新单词长度统计完毕，与该单词前已统计出的最大单词长度比较，将最大单词长度赋给变量maxlen */
		else
		{
			if (num > maxlen)
			{
				maxlen = num;
			}
			num = 0; //将num的值清零，为统计下一个单词的长度做准备
		}
	}
	/* 将最后一个单词的长度与已统计出的最大长度做比较，找出字符串中所有单词的最大长度 */
	if (num > maxlen)
	{
		maxlen = num;
	}

	printf("\nmax_length of the string is: %d\n", maxlen); //输出最大单词的长度

	return 0;
}



