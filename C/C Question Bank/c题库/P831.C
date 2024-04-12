#include <stdio.h>

int main(void)
{
	int i, max, min, jigeshu = 0, sum = 0, score[40];
	double jigelv, aver;

	
	printf("\n请输入40位同学的成绩：");
	for (i=0; i<40; i++)
	{
		scanf("%d", &score[i]);
	}
	max = score[0];
	min = score[0];
	
	for (i=0; i<40; i++)
	{
		if (score[i] > max) //计算最高分
		{
			max = score[i];
		}
		else if (score[i] < min) //计算最低分
		{ 
			min = score[i];
		}
		sum = sum + score[i]; //计算总分
		if (score[i] >= 60) //计算及格人数
		{
			jigeshu++; 
		}
	}

	aver = (double)sum / 40; //计算平均分
	jigelv = (double)jigeshu / 40 * 100; //计算及格率

	printf("\n最高分：%d\n最低分：%d\n平均分：%.1f\n及格率：%.0f%%\n", max, min, aver, jigelv);

	return 0;
}