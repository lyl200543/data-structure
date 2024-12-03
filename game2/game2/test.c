#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("***************扫雷***************\n");
	printf("************1.开始游戏************\n");
	printf("************0.退出游戏************\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化存放雷的信息的数组
	intiboard(mine, ROWS, COLS,'0');
	//初始化扫雷信息的数组
	intiboard(show, ROWS, COLS,'*');
	/*printboard(mine, ROW, COL);*/
	printboard(show, ROW, COL);
	//设置雷
	mineset(mine, ROW, COL);
	//printboard(mine, ROW, COL);
	//扫雷
	findmine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("玩家请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}