
#include <stdio.h>
#include <string.h>

#define N 32

void conj(char *s1, char *s2);

int main(void)
{
	char str1[N * 2], str2[N];
	
	gets(str1);
	
	gets(str2);
	
	conj(str1, str2);
	
	printf("After conj string1:%s\n", str1);
	
	return 0;
}

/* 请在这里填写答案 */

void conj(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char tem[64];
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	for (i = 0, j = 0; s1[i] != '\0' && s2[i] != '\0'; i++, j += 2)
	{
		tem[j] = s1[i];
		tem[j + 1] = s2[i];
	}
	if (len1 > len2)
	{
		for (;i < len1; i++)
		{
			tem[j++] = s1[i];
		}
	}
	else
	{
		for (;i < len2; i++)
		{
			tem[j++] = s2[i];
		}
	}
	tem[j] = '\0';
	strcpy(s1, tem);
}
