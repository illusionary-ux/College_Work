#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("please input the score: ");
	scanf("%d", &score);
	
	switch (score / 10)
	{
		case 10:
		case 9: 
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		case 5:
			grade = 'E';
			break;
		case 4:
			grade = 'F';
			break;
		case 3:
			grade = 'G';
			break;
		case 2:
			grade = 'H';
			break;
		case 1:
			grade = 'I';
			break;
		case 0:
			grade = 'J';
			break;	
		default:
			grade = 'X';
			break;		
	}
	
	printf("\nscore=%d, grade=%c\n", score, grade);
	
	return 0;
}