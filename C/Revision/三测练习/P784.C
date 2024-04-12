#include<stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void search(float (*p)[4], int n);

int main(void)
{
	int n, i;
	float score[3][4];

	printf("input student's score:\n");
	for (i=0; i<=2; i++)
	{
		printf("    student %d: ", i);
		scanf("%f %f %f %f", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}

	printf("\ninput student No: ");
	scanf("%d", &n);
	search(score, n);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void search(float (*p)[4], int n)
{
	int i;
	
	printf("\nthe score of No %d are:", n);
	for (i = 0; i < 4; i++)
	{
		printf("%6.1f", *(*(p + n) + i));
	}
}
