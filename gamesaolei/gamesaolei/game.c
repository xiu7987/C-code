#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1
void Menu()
{
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****0.结束游戏*****\n");
	printf("********************\n");
}

void Initialization(char face[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			face[i][j] = set;
		}
	}
}

void print(char face[ROWS][COLS], int row, int col)
{
	printf("！！！小心地雷！！！\n");
	int i = 0;
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
			printf("%c ", face[i][j]);
		printf("\n");
	}
}

void mailei(char hide[ROWS][COLS], int row, int col)
{
	int count = LEI;
	do
	{
		int r = rand() % ROW + 1;
		int c = rand() % COL + 1;
		if (hide[r][c] != '1')
		{
			hide[r][c] = '1';
			count--;
		}
	} while (count);
}

int facemine(char face[ROWS][COLS],int r,int c)
{
	return face[r - 1][c - 1] - '0' + face[r - 1][c] - '0' + face[r - 1][c + 1] - '0'
		+ face[r][c - 1] - '0' + face[r][c] - '0' + face[r][c + 1] - '0'
		+ face[r + 1][c - 1] - '0' + face[r + 1][c]-'0' + face[r + 1][c + 1] - '0';
}

void mineclear(char hide[ROWS][COLS], char face[ROWS][COLS], int row, int col)
{
	printf("请输入要扫的坐标\n");
	int r = 0;
	int c = 0;
	int clear = ROW * COL - LEI;
	while (clear)
	{
		scanf_s("%d %d", &r, &c);
		if (r <= row && r >= 1 && c <= col && c >= 1)
		{
			if (hide[r][c] == '1')
			{
				printf("很遗憾，你踩到雷了，游戏结束\n");
				break;
			}
			else if (hide[r][c] == '0')
			{
				int v = facemine(hide, r, c);
				face[r][c] = v + '0';
				print(face, row, col);
				clear--;
			}
		}
		else printf("输入错误，请重新输入\n");
	}
	if (clear == 0)
	{
		printf("恭喜你，扫雷成功。\n");
	}
}