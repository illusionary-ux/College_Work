#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */

/* 定义结构体类型struct student */
struct student
{
	int num;
	char name[20];	
	float score1, score2, score3;
	float aver;
};

void average(struct student banji[], int n);
int maxaver(struct student banji[], int n);


/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	struct student myClass[5];
	int i;
	
	printf("Please input students  info:Num Name score1 score2 score3\n");
	/* 以下for循环功能：从键盘给5个元素输入数据 */
	for (i=0; i<5; i++)
	{
		printf("%d:", i+1); //显示序号
		scanf("%d %s %f %f %f", &myClass[i].num, myClass[i].name,
			&myClass[i].score1, &myClass[i].score2, &myClass[i].score3);
	}

	average(myClass, 5); //调用函数求各学生的平均分
	high = maxaver(myClass, 5); //调用函数求平均分最高的学生序号，并将序号赋给变量high


	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */

/* 以下函数的功能：求各学生的平均分 */
void average(struct student banji[], int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		banji[i].aver = (banji[i].score1 + banji[i].score2 + banji[i].score3) / 3;
	}
}

/* 以下函数的功能：求平均分最高的学生序号 */
int maxaver(struct student banji[], int n)
{
	int i, maxi;
	float max;

	max = banji[0].aver; //将第一个元素的平均分赋给变量max
	maxi = 0; //将第一个元素的序号赋给变量maxi
	
	/* 以下for循环的作用：求最高平均分所在元素及元素序号 */
	for (i=1; i<n; i++)
	{
		if (banji[i].aver > max)
		{
			max = banji[i].aver;
			maxi = i;
		}
	}

	return maxi; //将平均分最高的元素序号作为函数值返回

}


