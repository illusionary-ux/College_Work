#include <stdio.h>

int main(void)
{
	char a1;

	printf("please input the grade: ");
	scanf("%c", &a1);
	if (a1 == 'A')
	{
		printf("\ngrade=%c, score=95\n", a1);
	}
	else if (a1 == 'B')
	{
		printf("\ngrade=%c, score=85\n", a1);
	}
	else if (a1 == 'C')
	{
		printf("\ngrade=%c, score=75\n", a1);
	}
	else if (a1 == 'D')
	{
		printf("\ngrade=%c, score=65\n", a1);
	}
	else if (a1 == 'E')
	{
		printf("\ngrade=%c, score=55\n", a1);
	}
	else if (a1 == 'F')
	{
		printf("\ngrade=%c, score=45\n", a1);
	}
	else if (a1 == 'G')
	{
		printf("\ngrade=%c, score=35\n", a1);
	}
	else if (a1 == 'H')
	{
		printf("\ngrade=%c, score=25\n", a1);
	}
	else if (a1 == 'I')
	{
		printf("\ngrade=%c, score=15\n", a1);
	}
	else if (a1 == 'J')
	{
		printf("\ngrade=%c, score=0\n", a1);
	}
	else
	{
		printf("\ngrade=%c Error\n", a1);
	}
	return 0;

}