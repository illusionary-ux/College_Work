/*
程序的功能：
从键盘输入一个一百分制成绩，如果不在0～100范围内，则要求重新输入数据，直到输入的数据在0～100范围内。
将输入的数据转换成等级‘A’，‘B’，‘C’，‘D’，‘E’。
90分以上为‘A’，80～89分为‘B’，70～79分为‘C’，60～69分为‘D’，60分以下为‘E’，
要求使用switch、case、default语句，结果赋值给变量grade，并将变量grade的值输出到屏幕上。
*/
#include <stdio.h>

int main(void)
{
	float score; //变量score用来存放百分制成绩
	char grade; //变量grade用来存放成绩等级

	/* 从键盘输入一个一百分制成绩，如果不在0～100范围内，
	则要求重新输入数据，直到输入的数据在0～100范围内 */
	do
	{
		printf("please input the score(0-100):");
		scanf("%f", &score);
	} while ((score < 0) || (score > 100));

	/* 将百分制成绩转换成等级 */
	switch ((int)score / 10)
	{
		case 10:
		case 9: 
			grade = 'A'; //90分以上是A
			break;
		case 8: 
			grade = 'B'; //80 ~ 89分是B
			break;
		case 7: 
			grade = 'C'; //70 ~ 79分是C
			break;
		case 6: 
			grade = 'D'; //60 ~ 69是D
			break;
		default: 
			grade = 'E'; //不及格是E
	}

	printf("score=%.1f,grade=%c\n", score, grade); //输出结果

	return 0;
}