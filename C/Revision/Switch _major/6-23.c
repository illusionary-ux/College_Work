#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
	char t[MAXN], s[MAXN];
	int m;
	
	scanf("%d\n", &m);
	ReadString(t);
	strmcpy( t, m, s );
	printf("%s\n", s);
	
	return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s )
{
	int i, len = 0, tot = 0;
	for (i = 0; t[i] != '\0'; i++)
	{
		len++;
	}
	if (m > len)
	{
		*s = NULL;
	}
	else
	{
		for (i = m - 1; t[i] != '\0'; i++)
		{
			*(s + tot++) = t[i];
		}
		*(s + tot) = '\0';
	}
}
