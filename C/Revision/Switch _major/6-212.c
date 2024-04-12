
#include <stdio.h>
void Sort(char *p);

int main(void)
{
    char str[21] ;
 
    gets(str);
    Sort(str);
    puts(str); 

    return 0;
} 

/* 请在这里填写答案 */
void Sort( char str[] )
{
	int i, j, len = 0;
	char tem;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 1; i < len - 1; i++)
	{
		for (j = i + 1; j < len - 1; j++)
		{
			if (str[i] < str[j])
			{
				tem = str[j];
				str[j] = str[i];
				str[i] = tem;
			}
		}
	}
}
