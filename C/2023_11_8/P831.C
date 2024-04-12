#include<stdio.h>

int main(void)
{
	int sco[40];
	int i, max, min;
	double ava = 0, rate, pass = 0;

	printf("请输入40位同学的成绩：");
	for (i = 0; i < 40; i++)
	{
		scanf("%d", &sco[i]);
	}
	max = sco[0];
	min = sco[0]; 
	for (i = 0; i < 40; i++)
	{
		if (max < sco[i])
		{
			max = sco[i];
		}
		if (min > sco[i])
		{
			min = sco[i];
		}
		if (sco[i] >= 60)
		{
			pass = pass + 1;
		}
		ava = ava + sco[i];
	}
	ava = ava / 40;
	rate = pass / 40 * 100;
	printf("\n最高分：%d\n最低分：%d\n平均分：%.1lf\n及格率：%.0f%%", max, min, ava, rate);
	return 0;
}