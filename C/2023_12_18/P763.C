#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
struct student
{
	int num;
	char name[20];
	float score1, score2, score3, aver;
} myClass[5];

int findmax(struct student myClass[]);

/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f", &myClass[i].num, myClass[i].name, &myClass[i].score1, &myClass[i].score2, &myClass[i].score3);
		myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3) / 3;
	}
	high = findmax(myClass);

	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
int findmax(struct student myClass[])
{
	int i, lie = 0;
	float max = myClass[0].aver;
	
	for (i = 0; i < 5; i++)
	{
		if (myClass[i].aver > max)
		{
			max = myClass[i].aver;
			lie = i;
		}
	}
	return lie;
}


