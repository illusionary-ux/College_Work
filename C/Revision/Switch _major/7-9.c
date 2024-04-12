#include<stdio.h>

int main(void)
{
	char tem;
	int tot = 0, i, sum = 0, num[10000];
	
	for (i = 0; i < 10000; i++)
	{
		scanf("%c", &tem);
		if (tem != '.' && tem != ' ')
		{
			tot++;
			
		}
		if (tem == ' ' && tot > 0)
		{
			num[sum++] = tot;
			tot = 0;
		}
		if (tem == '.')
		{
			if (tot > 0) // 确保记录最后一个单词的长度
			{ 
                num[sum++] = tot;
            }
			break;
		}
	}
	
	for (i = 0; i < sum; i++)
	{
			printf("%d", num[i]);
			if (i != sum - 1)
			{
				printf(" ");
			}
	}
	return 0;
}
