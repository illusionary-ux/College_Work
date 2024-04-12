#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如结构体的定义、函数原型声明等，行数不限) */

/* 定义结构体类型struct stu */
struct stu
{
	char name[11];
	char num[11];
	int score;
};

void input(struct stu *pstu, int n); //函数原型声明
void output(struct stu *pstu, int n); //函数原型声明
/* User Code End(考生添加代码结束) */

int main(void)
{  
	struct stu stud[5];	 
	
	input(stud, 5);   
	printf("\nfailed the exam: ");  
	output(stud, 5);
	
	return 0; 
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */

/*以下函数的功能：从键盘输入各学生的数据 */
void input(struct stu *pstu, int n)
{
	int i;

	printf("input name number score:\n");
	for (i=0; i<n; i++)
	{
		printf("student %d: ", i + 1); //显示序号
		scanf("%s %s %d", (pstu + i)->name, (pstu + i)->num, &((pstu + i)->score)); //输入学生数据
		/* 以下while循环的作用：输入的成绩不在0 ~ 100之间，重新输入 */
		while ((pstu + i)->score > 100 || (pstu + i)->score <0) 
		{
			printf("           error score! input again!\n");
			printf("student %d: ", i + 1);
			scanf("%s %s %d", (pstu + i)->name, (pstu + i)->num, &((pstu + i)->score));
		}
	}
}

/*以下函数的功能：在屏幕上输出不及格学生的数据 */
void output(struct stu *pstu, int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		if ((pstu + i)->score < 60) //有不及格的课程
		{
			printf("%s/%s,%d   ", (pstu + i)->num, (pstu + i)->name, (pstu + i)->score);
		}		
	}
}
