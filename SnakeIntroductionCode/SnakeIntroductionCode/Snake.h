#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#include <locale.h>

#define WALL L'□'
#define POS_X 24
#define POS_Y 5
#define BODY L'●'
#define FOOD L'★'
#define KEY_PRESS(VK) ((GetAsyncKeyState(VK) & 0x1) ? 1 : 0)

typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode, * pSnakeNode;

typedef struct Snake
{
	pSnakeNode _pSnake;//维护整条蛇的指针
	pSnakeNode _pFood;//维护⻝物的指针
	enum DIRECTION _Dir;//蛇头的⽅向,默认是向右
	enum GAME_STATUS _Status;//游戏状态
	int _Socre;//游戏当前获得分数
	int _foodWeight;//默认每个⻝物10分
	int _SleepTime;//每⾛⼀步休眠时间
}Snake, * pSnake;

enum DIRECTION
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

enum GAME_STATUS
{
	OK,//正常运⾏
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//咬到⾃⼰
	END_NOMAL//正常结束
};


void GameStart(pSnake ps);

void Welcom_Menu();

void Set_Pos(short a, short b);

void GameMap();

void SnakeInit(pSnake ps);

void FoodInit(pSnake ps);

void GameRun(pSnake ps);

void ScoreStat(pSnake ps);

void GameIntroduction();

void SnakeMove(pSnake ps);

void NoFood(pSnake ps, pSnakeNode psn);

void EatFood(pSnake ps, pSnakeNode psn);

void GameEnd(pSnake ps);