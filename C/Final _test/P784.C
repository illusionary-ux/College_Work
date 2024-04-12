#include<stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
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
	
/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void search(float (*p)[4], int n)
{
	int j;
	
	printf("\nthe score of No %d are:", n);
	for (j = 0; j < 4; j++)
	{
		printf("%6.1f", *(*(p + n) + j));
	}
}