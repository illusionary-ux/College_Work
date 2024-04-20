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
		exit;
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
	fscanf(fp, "%s", correctPassword);
	fclose(fp);
	if (strcmp(correctPassword, password) == 0) {
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
	printf("*              1.添加学生                 *\n");
	printf("*              2.查看学生                 *\n");
	printf("*              3.查找学生                 *\n");
	printf("*              4.修改学生                 *\n");
	printf("*              5.排序学生                 *\n");
	printf("*              6.删除学生                 *\n");
	printf("*              0.退出                     *\n");
	printf("*******************************************\n");
	printf("请输入您的选择：");
}

void FindStudent(void)
{

}
void AddStudent(void)
{

}
void DeleteStudent(void)
{

}
void ShowStudent(void)
{

}
void SaveStudent(void)
{

}
void LoadStudent(void)
{

}
void SortStudent(void)
{

}
void FreeStudent(void)
{

}