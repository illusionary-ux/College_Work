#include<stdio.h>
#include<string.h>

int main(void)
{
	char name1[9], name2[9];
	int i, flag = 0;

	printf("请输入姓名1: ");
	gets(name1);
	printf("请输入姓名2: ");
	gets(name2);
	for (i = 0; i < 2; i++)
	{
		if (name1[i] != name2[i])
		{
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("\n“%s”与“%s”同姓。", name1, name2);
	}
	else
	{
		printf("\n“%s”与“%s”不同姓。\n", name1, name2);
	}
	return 0;
}