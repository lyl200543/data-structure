#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void intiboard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		int j;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}

}

void printboard(char arr[ROWS][COLS], int row, int col)
{
	int i;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


void mineset(char arr[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x - 1][y - 1] - 8 * '0';
	//存放雷的位置为'1'，没有雷的位置为'0'，‘1’的ASCII码值为49，‘0’的为48，‘1’-‘0’=1，故坐标周围有几个雷可通过周围元素之和减去8*‘0’
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = row * col - COUNT;
	while (win)
	{
		printf("请输入排雷坐标：");
		int x, y;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("恭喜你，你被炸死了!\n");
				printboard(mine, ROW, COL);
			}
			else
			{
				int ret = get_mine_count(mine, x, y);
				show[x][y] = ret + '0';   /*类型转换为char*/
				win--;
				printboard(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == 0)
	{
		printf("很遗憾，你通关了\n");
		printboard(mine, ROW, COL);
	}
}
