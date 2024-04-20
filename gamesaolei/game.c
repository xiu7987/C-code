#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1
void Menu()
{
	printf("********************\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****0.������Ϸ*****\n");
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
	printf("������С�ĵ��ף�����\n");
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

void mailei(char hide[ROWS][COLS], int row, int col,int lei)
{
	int count = lei;
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

void mineclear(char hide[ROWS][COLS], char face[ROWS][COLS], int row, int col,int lei)
{
	printf("������Ҫɨ������\n");
	int r = 0;
	int c = 0;
	int clear = row * col - lei;
	while (clear)
	{
		scanf_s("%d %d", &r, &c);
		if (r <= row && r >= 1 && c <= col && c >= 1)
		{
			if (hide[r][c] == '1')
			{
				printf("���ź�����ȵ����ˣ���Ϸ����\n");
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
		else printf("�����������������\n");
	}
	if (clear == 0)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
	}
}
void Initialization1(char face[ROWS1][COLS1], int rows, int cols, char set)
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

void print1(char face[ROWS1][COLS1], int row, int col)
{
	printf("! ! ! ������С�ĵ��ף�����! ! ! !\n");
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		if (i == 1)
		printf(" %d ", i);
		else printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			if (j == 1 && i <= 9)
			{
				printf(" %c ", face[i][j]);
			}
			else if (j >= 10)
			{
				printf(" %c ", face[i][j]);
			}
			else printf("%c ", face[i][j]);
		}
		printf("\n");
	}
}

void mailei1(char hide[ROWS1][COLS1], int row, int col, int lei)
{
	int count = lei;
	do
	{
		int r = rand() % row + 1;
		int c = rand() % col + 1;
		if (hide[r][c] != '1')
		{
			hide[r][c] = '1';
			count--;
		}
	} while (count);
}

int facemine1(char face[ROWS1][COLS1], int r, int c)
{
	return face[r - 1][c - 1] - '0' + face[r - 1][c] - '0' + face[r - 1][c + 1] - '0'
		+ face[r][c - 1] - '0' + face[r][c] - '0' + face[r][c + 1] - '0'
		+ face[r + 1][c - 1] - '0' + face[r + 1][c] - '0' + face[r + 1][c + 1] - '0';
}

void mineclear1(char hide[ROWS1][COLS1], char face[ROWS1][COLS1], int row, int col, int lei)
{
	printf("������Ҫɨ������\n");
	int r = 0;
	int c = 0;
	int clear = row * col - lei;
	while (clear)
	{
		scanf_s("%d %d", &r, &c);
		if (r <= row && r >= 1 && c <= col && c >= 1)
		{
			if (hide[r][c] == '1')
			{
				printf("���ź�����ȵ����ˣ���Ϸ����\n");
				break;
			}
			else if (hide[r][c] == '0')
			{
				int v = facemine1(hide, r, c);
				face[r][c] = v + '0';
				print1(face, row, col);
				clear--;
			}
		}
		else printf("�����������������\n");
	}
	if (clear == 0)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
	}
}
void Initialization2(char face[ROWS2][COLS2], int rows, int cols, char set)
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

void print2(char face[ROWS2][COLS2], int row, int col)
{
	printf("! ! ! ������С�ĵ��ף�����! ! ! !\n");
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		if (i == 1)
			printf(" %d ", i);
		else printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			if (j == 1 && i <= 9)
			{
				printf(" %c ", face[i][j]);
			}
			else if (j >= 10)
			{
				printf(" %c ", face[i][j]);
			}
			else printf("%c ", face[i][j]);
		}
		printf("\n");
	}
}

void mailei2(char hide[ROWS2][COLS2], int row, int col, int lei)
{
	int count = lei;
	do
	{
		int r = rand() % row + 1;
		int c = rand() % col + 1;
		if (hide[r][c] != '1')
		{
			hide[r][c] = '1';
			count--;
		}
	} while (count);
}

int facemine2(char face[ROWS2][COLS2], int r, int c)
{
	return face[r - 1][c - 1] - '0' + face[r - 1][c] - '0' + face[r - 1][c + 1] - '0'
		+ face[r][c - 1] - '0' + face[r][c] - '0' + face[r][c + 1] - '0'
		+ face[r + 1][c - 1] - '0' + face[r + 1][c] - '0' + face[r + 1][c + 1] - '0';
}

void mineclear2(char hide[ROWS2][COLS2], char face[ROWS2][COLS2], int row, int col, int lei)
{
	printf("������Ҫɨ������\n");
	int r = 0;
	int c = 0;
	int clear = row * col - lei;
	while (clear)
	{
		scanf_s("%d %d", &r, &c);
		if (r <= row && r >= 1 && c <= col && c >= 1)
		{
			if (hide[r][c] == '1')
			{
				printf("���ź�����ȵ����ˣ���Ϸ����\n");
				break;
			}
			else if (hide[r][c] == '0')
			{
				int v = facemine2(hide, r, c);
				face[r][c] = v + '0';
				print2(face, row, col);
				clear--;
			}
		}
		else printf("�����������������\n");
	}
	if (clear == 0)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
	}
}