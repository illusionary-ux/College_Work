#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void deleteother(char *p);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void deleteother(char *p)
{
	int i, tot = 0;
	for (i = 0; *(p + i) != '\0'; i++)
	{
		if ((*(p + i) >= 'a' && *(p + i) <= 'z')|| (*(p + i) >= 'A' && *(p + i) <= 'Z'))
		{
			*(p + tot++) = *(p + i);
		}
	}
	*(p + tot) = '\0';
}