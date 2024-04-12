#include<stdio.h>

#define SNUM 4 /* student number */
#define CNUM 3 /* course number */

/* User Code Begin(考生可在本行后添加代码，例如结构体的定义、函数原型声明等，行数不限) */

/* 定义结构体类型struct student */
struct student
{
	char num[6];
	char name[8];	
	int score[3];
};

void DispScore(struct student banji[]); //函数原型声明
void FindNoPass(struct student banji[]); //函数原型声明

/* User Code End(考生添加代码结束) */

int main(void)
{
	int i, j;
	struct student stu[SNUM];

	printf("Please input student num name and score:\n");
	for (i=0; i<SNUM; i++)
	{ 
		printf("Student %d: ", i+1);
		scanf("%s %s", stu[i].num, stu[i].name);
		for (j=0; j<CNUM; j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
	
	DispScore(stu);
	FindNoPass(stu);

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */

/*以下函数的功能：在屏幕上输出各学生的数据 */
void DispScore(struct student banji[])
{
	int i, j;
	
	printf("\nStudent Info and Score:\n");
	for (i=0; i<SNUM; i++)
	{ 
		printf("%6s %8s", banji[i].num, banji[i].name);
		for (j=0; j<CNUM; j++)
		{
			printf("%5d", banji[i].score[j]);
		}
		printf("\n");
	}
}

/*以下函数的功能：查找并输出有两门及两门以上不及格课程的学生数据 */
void FindNoPass(struct student banji[])
{
	int i, j, count; //变量count用来记录不及格的课程门数

	printf("\nTwo Course No Pass Students:\n");
	for (i=0; i<SNUM; i++)
	{ 
		count = 0; //查找不及格课程前将变量count清零
		for (j=0; j<CNUM; j++)
		{
			if (banji[i].score[j] < 60) //课程不及格
			{
				count++; //变量count的值增加1
			}
		}
		if (count >= 2) // 有两门及两门以上不及格课程
		{
			printf("%6s %8s", banji[i].num, banji[i].name); //输出该学生的学号和姓名
			/* 以下for循环作用：输出不及格的课程分数 */
			for (j=0; j<CNUM; j++)
			{
				if (banji[i].score[j] < 60)
				{
					printf("%5d", banji[i].score[j]);
				}
			}
			printf("\n");
		}	
	}


}