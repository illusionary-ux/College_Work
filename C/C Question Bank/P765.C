#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(考生可在本行后添加代码，行数不限) */

/* 定义结构体类型struct student, 并为struct student重新命名为STUDENT */
typedef struct student
{
	int  num;
	char name[20];
	int math, english, computer;
	float average;
} STUDENT;

void qiupj(STUDENT banji[], int n); 
void paixu(STUDENT banji[], int n);


/* User Code End(考生添加代码结束) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
		
	printf("Please input info of students:No Name Math English Computer\n");
	/* 以下for循环功能：从键盘给5个元素输入数据 */
	for (i=0; i<5; i++) 
	{
		printf("%d:", i+1); //显示序号
		scanf("%d %s %d %d %d", &myclass[i].num, myclass[i].name,
			&myclass[i].math, &myclass[i].english, &myclass[i].computer);
	}

	qiupj(myclass, 5); //调用函数求各学生的平均分
	paixu(myclass, 5); //调用函数将各学生数据按平均分排序


	/* User Code End(考生添加代码结束) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */

/* 以下函数的功能：求各学生的平均分 */
void qiupj(STUDENT banji[], int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		banji[i].average = (float)(banji[i].math + banji[i].english + banji[i].computer) / 3;
	}
}

/* 以下函数的功能：将各学生数据按平均分从高到低排序 */
void paixu(STUDENT banji[], int n)
{
	STUDENT tmp;
	int i, j;

	/* 以下for循环功能：冒泡法排序 */
	for (j = 1; j <= n-1; j++)
	{
		for (i = 1; i <= n - j; i++)
		{
			if (banji[i-1].average < banji[i].average) 
			{
				tmp = banji[i-1];
				banji[i-1] = banji[i];
				banji[i] = tmp;
			}
		}
	}
}