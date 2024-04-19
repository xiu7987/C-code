#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	begin:
	Menu();
	do 
	{
		scanf_s("%d", &input);
		if (input == 1)
		{
			char face[ROWS][COLS];
			char hide[ROWS][COLS];
			Initialization(face, ROWS, COLS,'*');
			Initialization(hide, ROWS, COLS,'0');//对显示与非显示数组进行初始化
			mailei(hide, ROW, COL);//埋雷
			print(face, ROW, COL);//打印中间9*9的数组
			mineclear(hide, face, ROW, COL);//扫雷的游玩程序
			print(hide, ROW, COL);//结束后的打印，显示所有雷的位置
			goto begin;
		}
		else if (input == 0)
		{
			printf("退出游戏\n");
			break;
		}
		else printf("输入有误，请重新输入\n");
	}while (input);
	return 0;
}