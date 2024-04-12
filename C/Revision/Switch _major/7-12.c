#include<stdio.h>
#include<string.h>
int main(void)
{
	int num2;
	char s1[81] = "\0", s2[81] = "\0", t[81] = "\0", *p = NULL;
	
	gets(s1);
	gets(s2);
	num2 = strlen(s2);
	while((p = strstr(s1, s2))!= NULL){//查找到了存在
		strcpy(t, p + num2);
		*p = '\0';
		strcat(s1, t);//TODO
	}
	printf("%s",s1);
	
	return 0;
}
