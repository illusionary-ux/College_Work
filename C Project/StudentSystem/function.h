#pragma once
void Login(void)
{
	FILE* fp = fopen("login.txt", "r");
	char currentPassword[20];
	char currentUsername[20];
	if (fp == NULL)
	{
		printf("未查找到登录文件，请新建用户名与密码\n");
		createInitialPassword();
	}
	else
	{
		fclose(fp);
	}
	printf("请输入当前用户名: ");
	scanf("%s", currentUsername);
	printf("请输入当前密码: ");
	scanf("%s", currentPassword);

	if (login_check(currentPassword, currentPassword))
	{
		printf("登录成功\n");
	}
	else
	{
		printf("登录失败\n");
		exit(0);
	}
}

void createInitialPassword(void) {
	char initialPassword[20];
	char initialUsername[20];
	printf("设置一个新用户名: ");
	scanf("%s", initialUsername);
	printf("设置一个新密码: ");
	scanf("%s", initialPassword);
	change(initialUsername, initialPassword);
	printf("初始用户信息已设置。\n");
}

int login_check(char* username, char* password) {
	FILE* fp = fopen("login.txt", "r");
	if (fp == NULL) {
		printf("无法打开密码文件进行读取。\n");
		return 0;
	}
	char correctPassword[20];
	char correctUsername[20];
	fscanf(fp, "%s", correctPassword);
	fscanf(fp, "%s", correctUsername);
	fclose(fp);
	if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void change(char* newUsername, char* newPassword) {
	FILE* fp = fopen("login.txt", "w");
	if (fp == NULL) {
		printf("无法打开密码文件进行写入。\n");
		return;
	}
	fprintf(fp, "%s\n", newUsername);
	fprintf(fp, "%s", newPassword);
	fclose(fp);
}

void ShowMenu(void)
{
	printf("*******************************************\n");
	printf("*              学生管理系统               *\n");
	printf("*******************************************\n");
	printf("*              1.录入学生                 *\n");
	printf("*              2.查看学生                 *\n");
	printf("*              3.查找学生                 *\n");
	printf("*              4.修改学生                 *\n");
	printf("*              5.排序学生                 *\n");
	printf("*              6.删除学生                 *\n");
	printf("*              7.插入学生                 *\n");
	printf("*              8.显示不及格               *\n");
	printf("*              0.退出                     *\n");
	printf("*******************************************\n");
	printf("请输入您的选择：");
}

void AddStudent(void)
{
	system("cls");
	int n;
	FILE* fp = fopen("student.txt", "w");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Student s;
	printf("请输入插入数量\n");
	scanf("%d", &n);
	printf("学号\t姓名\t性别（0女性/1男性）\t分数1\t分数2\t分数3\t分数4\t分数5\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %d %d %d %d %d %d", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4]);
		s.average = (s.score[0] + s.score[1] + s.score[2] + s.score[3] + s.score[4]) / 5.0;
		fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
	}
	fclose(fp);
	printf("学生信息录入成功\n");
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");
}


void ShowStudent(void)
{
	system("cls");
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Student s;
	printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4], &s.average) != EOF)
	{
		printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
	}
	printf("按任意键退出\n");
	fclose(fp);
	getchar();
	system("cls");
}
void FindStudent(void)
{
	system("cls");
	printf("请输入要查找的学生学号：");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Student s;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s.num, s.name, &s.gender, &s.score[0], &s.score[1], &s.score[2], &s.score[3], &s.score[4], &s.average) != EOF)
	{
		if (strcmp(aim, s.num) == 0)
		{
			printf("查找成功");
			printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s.num, s.name, s.gender, s.score[0], s.score[1], s.score[2], s.score[3], s.score[4], s.average);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("查找失败\n");

	}
	fclose(fp);
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");
}
void EditStudent(void)
{
	system("cls");
	printf("请输入要修改的学生学号：");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Student s[100];
	int i = 0;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF)
	{
		i++;
	}
	fclose(fp);//读取文件
	for (int j = 0; j < i; j++)
	{
		if (strcmp(aim, s[j].num) == 0)
		{
			printf("查找成功,原分数如下");
			printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
			printf("请输入新的分数：");
			scanf("%d %d %d %d %d", &s[j].score[0], &s[j].score[1], &s[j].score[2], &s[j].score[3], &s[j].score[4]);
			s[j].average = (s[j].score[0] + s[j].score[1] + s[j].score[2] + s[j].score[3] + s[j].score[4]) / 5.0;
			flag = 1;
		}
	}
	fp = fopen("student.txt", "w");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	for (int j = 0; j < i; j++)
	{
		fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
	}
	if (flag == 0)
	{
		printf("查找失败\n");
	}
	else
	{
		printf("修改成功\n");
	}
	fclose(fp);
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");
}


void SortStudent(void)
{
	system("cls");
	Student s[100];
	int i = 0;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF)
	{
		i++;
	}
	fclose(fp);
	printf("请选择排序方式：1.按学号排序 2.按平均分排序\n");
	int choice;
	scanf("%d", &choice);
	if (choice == 1)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = 0; k < i - j - 1; k++)
			{
				if (strcmp(s[k].num, s[k + 1].num) > 0)
				{
					Student temp = s[k];
					s[k] = s[k + 1];
					s[k + 1] = temp;
				}
			}
		}
		printf("排序成功\n");
		printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
		for (int j = 0; j < i; j++)
		{
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
		}
	}
	else if (choice == 2)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = 0; k < i - j - 1; k++)
			{
				if (s[k].average < s[k + 1].average)
				{
					Student temp = s[k];
					s[k] = s[k + 1];
					s[k + 1] = temp;
				}
			}
		}
		printf("排序成功\n");
		printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
		for (int j = 0; j < i; j++)
		{
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
		}
	}
	else
	{
		printf("输入错误\n");
		return 0;
	}
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");

}
void DeleteStudent(void)
{
	system("cls");
	printf("请输入要删除的学生学号：");
	char aim[20], flag = 0;
	scanf("%s", aim);
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Node* head = NULL, * tail = NULL, * p, * q = NULL;
	Student tmp;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", tmp.num, tmp.name, &tmp.gender, &tmp.score[0], &tmp.score[1], &tmp.score[2], &tmp.score[3], &tmp.score[4], &tmp.average) != EOF)
	{
		p = (Node*)malloc(sizeof(Node));
		p->student = tmp;
		if (head == NULL)
		{
			head = p;
		}
		if (tail != NULL)
		{
			tail->next = p;
		}
		tail = p;
		p->next = NULL;/*链表构建*/
	}

	p = head;
	while (p != NULL)
	{
		if (strcmp(aim, p->student.num) == 0)
		{
			flag = 1;
			if (p == head)
			{
				head = p->next;
			}
			else
			{
				q->next = p->next;
			}
			free(p);
			break;
		}
		q = p;
		p = p->next;

	}
	fclose(fp);
	if (flag == 0)
	{
		printf("查找失败\n");

	}
	else
	{
		FILE* fp = fopen("student.txt", "w");
		if (fp == NULL)
		{
			printf("文件打开失败\n");
			return 0;
		}
		p = head;
		while (p != NULL)
		{
			fprintf(fp, "%s %s %d %d %d %d %d %d %.2f\n", p->student.num, p->student.name, p->student.gender, p->student.score[0], p->student.score[1], p->student.score[2], p->student.score[3], p->student.score[4], p->student.average);
			p = p->next;
		}
		fclose(fp);
		printf("删除成功\n");

	}
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");
}
void InsertStudent(void)
{
	system("cls");
	printf("请输入要插入的学生信息：");
	Node* head = NULL, * tail = NULL, * p, * q = NULL, * new;
	new = (Node*)malloc(sizeof(Node));
	scanf("%s %s %d %d %d %d %d %d", new->student.num, new->student.name, &new->student.gender, &new->student.score[0], &new->student.score[1], &new->student.score[2], &new->student.score[3], &new->student.score[4]);
	new->student.average = (new->student.score[0] + new->student.score[1] + new->student.score[2] + new->student.score[3] + new->student.score[4]) / 5.0;
	new->next = NULL;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	Student tmp;
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", tmp.num, tmp.name, &tmp.gender, &tmp.score[0], &tmp.score[1], &tmp.score[2], &tmp.score[3], &tmp.score[4], &tmp.average) != EOF)
	{
		p = (Node*)malloc(sizeof(Node));
		p->student = tmp;
		if (head == NULL)
		{
			head = p;
		}
		if (tail != NULL)
		{
			tail->next = p;
		}
		tail = p;
		p->next = NULL;/*链表构建*/
	}
	fclose(fp);
	printf("请输入要插入的位置：");
	int pos;
	scanf("%d", &pos);
	while (pos < 1 || pos > GetStuNum(head) + 1)
	{
		printf("输入错误，请重新输入\n");
		scanf("%d", &pos);
	}
	p = head;
	if (pos == 1)
	{
		new->next = head;
		head = new;
	}
	else
	{
		for (int i = 1; i < pos - 1; i++)
		{
			p = p->next;
		}
		new->next = p->next;
		p->next = new;
	}
	FILE* fp1 = fopen("student.txt", "w");
	if (fp1 == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	p = head;
	while (p != NULL)
	{
		fprintf(fp1, "%s %s %d %d %d %d %d %d %.2f\n", p->student.num, p->student.name, p->student.gender, p->student.score[0], p->student.score[1], p->student.score[2], p->student.score[3], p->student.score[4], p->student.average);
		p = p->next;
	}
	fclose(fp1);
	printf("插入成功\n");
	printf("按任意键退出\n");
	getchar();
	getchar();
	system("cls");
}
void ShowFailStudent(void) {
	system("cls");
	Student s[100];
	int i = 0;
	FILE* fp = fopen("student.txt", "r");
	if (fp == NULL) {
		printf("文件打开失败\n");
		return;  // 修正为直接 return
	}
	while (fscanf(fp, "%s %s %d %d %d %d %d %d %f", s[i].num, s[i].name, &s[i].gender, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3], &s[i].score[4], &s[i].average) != EOF) {
		if (i < 99) { // 防止数组越界
			i++;
		}
	}
	fclose(fp);

	printf("请输入要查看的科目 (1-5):\n");
	int choice;
	scanf("%d", &choice);
	if (choice < 1 || choice > 5) {
		printf("输入错误\n");
		return;
	}

	printf("不及格学生信息如下:\n");
	printf("\n学号\t姓名\t性别\t分数1\t分数2\t分数3\t分数4\t分数5\t平均分\n");
	int flag = 0;
	for (int j = 0; j < i; j++) {
		if (s[j].score[choice - 1] < 60) {
			printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", s[j].num, s[j].name, s[j].gender, s[j].score[0], s[j].score[1], s[j].score[2], s[j].score[3], s[j].score[4], s[j].average);
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("无不及格学生\n");
	}

	printf("按任意键退出\n");
	getchar(); // 用于捕获之前的回车
	getchar(); // 等待用户按键
	system("cls");
}

int GetStuNum(Node* head)
{
	Node* p = head;
	int num = 0;
	while (p != NULL)
	{
		num++;
		p = p->next;
	}
	return num;
}