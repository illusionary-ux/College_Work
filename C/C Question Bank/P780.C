#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int hanshu(char str[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";

	printf("input a string: ");
	Len = hanshu(String);  /* userCode(<50字符): 调用函数实现输入并统计输入字符个数 */

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int hanshu(char str[])
{
	int ch, i = 0;	

	ch = getchar(); //从键盘输入一个字符赋给变量ch
	while ((char)ch != '\n' && ch != EOF) //变量ch中的字符既不是换行符'\n'，也不是文件结束符EOF
	{
		if (i<100) //输入的字符还未满100个字符
		{
			str[i] = (char)ch;
			i++;
		}
		else
		{
			break;
		}
		ch = getchar();
	}
	str[i] = '\0'; //添加字符串结束标志'\0'

	return i;
}