#include <stdio.h>

#define maxNums 100

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
float Average(int chengji[], int num);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int i, n=0, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
		n++;
	}

	/* 本部分代码功能建议：调用用户自定义函数计算平均成绩 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	avgScore = Average(scores, n);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
float Average(int chengji[], int num)
{
	float aver;
	int i, sum = 0;

	for (i=0; i<num; i++)
	{
		sum = sum + chengji[i];
	}
	aver = (float)sum / num;

	return aver;
}