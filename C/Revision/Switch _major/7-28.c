#include<stdio.h>
#include<string.h>

struct student
{
	char num[6];
	char name[11];
	int fs1, fs2, fs3, tot;
};

int main(void) 
{
	struct student stu[10];
	int i, max, maxhang, n;
	
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", stu[i].num, stu[i].name, &stu[i].fs1, &stu[i].fs2, &stu[i].fs3);
		stu[i].tot = stu[i].fs1 + stu[i].fs2 + stu[i].fs3;
	}
	max = stu[0].tot;
	maxhang = 0;
	for (i = 1; i < n; i++)
	{
		if (stu[i].tot > max)
		{
			max = stu[i].tot;
			maxhang = i;
		}
	}
	printf("%s %s %d\n",stu[maxhang].name, stu[maxhang].num , stu[maxhang].tot);
	return 0;
}
