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
			int r = 0;
			arr:
			printf("请选择难度\n");
			printf("1.简单\n");
			printf("2.中等\n");
			printf("3.困难\n");
			scanf_s("%d",&r );
			if (r == 1)
			{
				char face[ROWS][COLS];
				char hide[ROWS][COLS];
				Initialization(face, ROWS, COLS, '*');
				Initialization(hide, ROWS, COLS, '0');//对显示与非显示数组进行初始化
				mailei(hide, ROW, COL, LEI);//埋雷
				print(face, ROW, COL);//打印中间9*9的数组
				mineclear(hide, face, ROW, COL, LEI);//扫雷的游玩程序
				print(hide, ROW, COL);//结束后的打印，显示所有雷的位置
				goto begin;
			}
			else if (r == 2)
			{
				char face[ROWS1][COLS1];
				char hide[ROWS1][COLS1];
				Initialization1(face, ROWS1, COLS1, '*');
				Initialization1(hide, ROWS1, COLS1, '0');//对显示与非显示数组进行初始化
				mailei1(hide, ROW1, COL1, LEI1);//埋雷
				print1(face, ROW1, COL1);//打印中间9*9的数组
				mineclear1(hide, face, ROW1, COL1, LEI1);//扫雷的游玩程序
				print1(hide, ROW1, COL1);//结束后的打印，显示所有雷的位置
				goto begin;
			}
			else if (r == 3)
			{
				char face[ROWS2][COLS2];
				char hide[ROWS2][COLS2];
				Initialization2(face, ROWS2, COLS2, '*');
				Initialization2(hide, ROWS2, COLS2, '0');//对显示与非显示数组进行初始化
				mailei2(hide, ROW2, COL2, LEI2);//埋雷
				print2(face, ROW2, COL2);//打印中间9*9的数组
				mineclear2(hide, face, ROW2, COL2, LEI2);//扫雷的游玩程序
				print2(hide, ROW2, COL2);//结束后的打印，显示所有雷的位置
				goto begin;
			}
			else 
			{
				printf("输入有误，请重新输入\n");
				goto arr;
			}
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