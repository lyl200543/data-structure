#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
int count = 0;
void menu()
{
	printf("*******************  三子棋  *********************\n");
	printf("****************** 1.开始游戏 ********************\n");
	printf("****************** 0.退出游戏 ********************\n");
	printf("**************************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	initboard(board,ROW,COL);
	//打印棋盘
	printboard(board, ROW, COL);
	//确定先后顺序
	printf("\n");
	printf("判断先后顺序\n");
	printf("请玩家输入（0/1）；");
	int m;
	scanf("%d", &m);
	int n = rand() % 2;
	printf("电脑输出：%d\n", n);
	if (m == n)
	{
		while (1)
		{
			/*玩家下棋*/
			playerboard(board, ROW, COL);
			count++;
			char ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("玩家获胜！\n");
				printf("\n");
				break;
			}
			else if (ret == '#')
			{
				printf("电脑获胜！\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
			//电脑下棋
			computerboard(board, ROW, COL);
			count++;
			ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("玩家获胜\n");
				printf("\n");

				break;
			}
			else if (ret == '#')
			{
				printf("电脑获胜！\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
		}
	}
	else
	{
		while (1)
		{
			//电脑下棋
			computerboard(board, ROW, COL);
			count++;
			char ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("玩家获胜！\n");
				printf("\n");
				break;
			}
			else if (ret == '#')
			{
				printf("电脑获胜！\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
			/*玩家下棋*/
			playerboard(board, ROW, COL);
			count++;
			ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("玩家获胜\n");
				printf("\n");

				break;
			}
			else if (ret == '#')
			{
				printf("电脑获胜！\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入：");
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
			printf("输入错误\n");
			break;
		}
	} while(input);
	return 0;
}