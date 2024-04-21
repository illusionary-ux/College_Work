#include"define.h"
#include"function.h"

int main(void)
{
	int choice;

	Login();
	getchar();//ere getchar() is used to get the '\n' character left in the buffer by the scanf() function in the Login() function.
	system("cls");
	do {
		ShowMenu();
		choice = _getch();

		switch (choice) {
		case '1':
			AddStudent();
			break;
		case '2':
			ShowStudent();
			break;
		case '3':
			FindStudent();
			break;
		case '4':
			EditStudent();
			break;
		case '5':
			SortStudent();
			break;
		case '6':
			DeleteStudent();
			break;
		case '7':
			InsertStudent();
			break;
		case '8':
			ShowFailStudent();
			break;
		case '0':
			printf("感谢使用学生管理系统，再见！\n");
			break;
		default:
			system("cls");
			printf("无效输入，请重新选择。\n");

		}
	} while (choice != '0');
	return 0;
}