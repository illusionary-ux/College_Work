#include <stdio.h>
void Conv( char *p );
int main()
{
	char str[64];  
	
	gets(str);
	Conv(str);
	printf("After changing:   %s", str);
	return 0;
}


/* 请在这里填写答案 */
void Conv( char *p ) 
{
	int i, len = 0;
	for (i = 0; *(p + i) != '\0'; i++) 
	{
		len++;
	}
	i = 0;
	while(*(p + i) == ' '){
		i++;
	}
	if (*(p + i) >= 'a' && *(p + i) <='z')
	{
		*(p + i) -= 32;
	}
	for (; i < len; i++)
	{
		if (*(p + i) == ' ' && *(p + i + 1) >= 'a' && *(p + i + 1) <='z')
		{
			*(p + i + 1) -= 32;
		}
	}
}
