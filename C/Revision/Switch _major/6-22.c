#include "stdio.h"
#define N 100
#define M 200

int my_strcpy_s(char str1[],int x,char str2[]);

void readline(char a[])  //???????????????????
{
  char ch;
  int i=0;
  while((ch=getchar())!='\n' )
   a[i++]=ch;
  a[i]='\0';
  return ;   
}

int main()
 {char a[N],b[M];
 int x;
 readline(a);
 readline(b);
 scanf("%d",&x);
  if(!my_strcpy_s(a,x,b))
    puts("error!");
  puts(a);
  return 0;
 }

int my_strcpy_s(char str1[],int x,char str2[])
{
    int i, len = 0;
    for (i = 0; str2[i] != '\0'; i++)
    {
    	;
	}
	len = i;
	if (len > x)
	{
		for (i = 0; i < x - 1; i++)
		{
			str1[i] = str2[i];
		}
		str1[i] = '\0';
		return 0;
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			str1[i] = str2[i];
		}
		return 1;
	}
}
