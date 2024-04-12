#include<stdio.h>

int main(void)
{
	char dengji;

	printf("please input the grade: ");
	scanf("%c", &dengji);
	switch (dengji)
	{
		case 'A':
			printf("\ngrade=%c, score=95\n", dengji);
			break;
		case 'B':
			printf("\ngrade=%c, score=85\n", dengji);
			break;
		case 'C':
			printf("\ngrade=%c, score=75\n", dengji);
			break;
		case 'D':
			printf("\ngrade=%c, score=65\n", dengji);
			break;
		case 'E':
			printf("\ngrade=%c, score=55\n", dengji);
			break;
		case 'F':
			printf("\ngrade=%c, score=45\n", dengji);
			break;
		case 'G':
			printf("\ngrade=%c, score=35\n", dengji);
			break;
		case 'H':
			printf("\ngrade=%c, score=25\n", dengji);
			break;
		case 'I':
			printf("\ngrade=%c, score=15\n", dengji);
			break;
		case 'J':
			printf("\ngrade=%c, score=0\n", dengji);
			break;
		default:
			printf("\ngrade=%C Error\n", dengji);
	}
	return 0;
}