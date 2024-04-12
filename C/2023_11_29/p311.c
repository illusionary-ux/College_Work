#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[128], str2[128], str3[256];
	int i, len1, len2, j;
	
	printf("Please input string1:");
	gets(str1);
	printf("Please input string2:");
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	for (i = 0, j = 0; str1[i] != '\0' && str2[i] != '\0'; i++, j += 2)
	{
		str3[j] = str1[i];
		str3[j + 1] = str2[i];
	}
	if (len1 > len2)
	{
		for (; str1[i] != '\0'; i++, j++)
		{
			str3[j] = str1[i];
		}
	}
	else
	{
		for (; str2[i] != '\0'; i++, j++)
		{
			str3[j] = str2[i];
		}
	}
	str3[len1 + len2] = '\0';
	printf("\nstring1:%s\n", str3);
	return 0;
}
