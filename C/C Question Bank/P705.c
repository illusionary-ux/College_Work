#include <stdio.h>

int main(void)
{
	char ch;

	printf("please input the letter of someday:");
	/* 从键盘输入一个字符给变量ch，如果该字符不是Y，则判断该字符是星期几，否则结束程序 */
	while ((ch = getchar()) != 'Y')  
	{
		switch (ch)
		{
			case 'M':
				printf("Monday\n");
				break;
			case 'T': 
				ch = getchar(); //第一个字符是T，则从键盘输入第二个字符
				if (ch == 'u')  //第二个字符是u，输出Tuesday
				{
					printf("Tuesday\n");
				}
				else if (ch == 'h') //第二个字符是h，输出Thursday
				{
					printf("Thursday\n");
				}
				else //第二个字符既不是u，也不是h，输出data error
				{
					ungetc(ch, stdin); // 该函数的功能是把ch中的字符返回给键盘stdin
					printf("data error\n");
				}
				break;
			case 'W':
				printf("Wednesday\n");
				break;
			case 'F':
				printf("Friday\n");
				break;
			case 'S':
				ch = getchar();
				if (ch == 'u')
				{
					printf("Sunday\n");
				}
				else if (ch == 'a')
				{
					printf("Saturday\n");
				}
				else 
				{
					ungetc(ch, stdin);	// 该函数的功能是把ch中的字符返回给键盘stdin
					printf("data error\n");
				}
				break;
			default:
				printf("data error\n"); //变量ch中的字符不是以上所有字符，则输出data error
		}
	}
	
	return 0;
}