#include<stdio.h>
#include"string.h"
void dele(char arr[]);
int main(void)
{
    char strA[81];
    gets(strA);
    dele(strA);
    puts(strA);
    return 0;
}

/* 请在这里填写答案 */
void dele(char arr[])
{
	int len, i, j, tot = 0;
	char tem, jieguo[81];
	
	len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}
		}
	}
	
	for (i = 0; i < len; i++)
	{
		if (arr[i] != ' ' && arr[i] != arr[i - 1])
		{
			jieguo[tot++] = arr[i];
		}
	}
	jieguo[tot] = '\0';
	strcpy(arr, jieguo);
}
