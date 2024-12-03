#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void menu()
{
	printf("*******************      Contact    **********************\n");
	printf("****************   1.Add        2.Del     ****************\n");
	printf("****************   3.Search     4.Modify  ****************\n");
	printf("****************   5.Show       6.sort    ****************\n");
	printf("****************   0.Exit                 ****************\n");
	printf("**********************************************************\n");
}

enum option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};

int main()
{
	int input;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请输入：> ");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			SaveContact(&con);
			ExitContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}