#include<stdio.h>

int main(void)
{
	float chengji;
	char dengji;
	int x;

	do
	{
		printf("please input the score(0-100): ");
		scanf("%f", &chengji);
	} while (chengji < 0 || chengji > 100);
	if (chengji >= 90)
	{
		x = 9;
	}
	else if (chengji < 90 && chengji >= 80) 
	{
		x = 8;
	}
	else if (chengji < 80 && chengji >= 70)
	{
		x = 7;
	}
	else if (chengji < 70 && chengji >= 60)
	{
		x = 6;
	}
	else 
	{
		x = 0;
	}
	switch (x)
	{
		case 10:
		case 9:
			dengji = 'A';
			break;
		case 8:
			dengji = 'B';
			break;
		case 7:
			dengji = 'C';
			break;
		case 6:
			dengji = 'D';
			break;
		default:
			dengji = 'E';
			break;
	}
	printf("\nscore=%.1f,grade=%c", chengji, dengji);
	return 0;
}