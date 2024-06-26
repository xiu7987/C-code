#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define WALL L'□'
#define FOOD L'★'
#define BODY L'●'
#define POS_X 24
#define POS_Y 5

#define KEY_PRESS(VK) ((GetAsyncKeyState(VK)&0x1) ? 1 : 0)

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

void REPOSITION(short x, short y);//调整输入的光标位置

void WelcomeMenu();//设置欢迎与介绍菜单

void GameMap();//设置游戏地图

void GameIntroduction();//设置在游戏过程中的提醒

void GameStart(pSnake ps);//游戏的初始化

void SnakeInit(pSnake ps);//蛇身的初始化

void FoodInit(pSnake ps);//初始化食物

void GameRun(pSnake ps);//游戏主体运行部分

void ScoreStat(pSnake ps);//分数统计

void Pause();//空格暂停

void SnakeMove(pSnake ps);//控制蛇移动的函数

int NextIsFood(pSnakeNode psn, pSnake ps);//判断下一个位置是否为食物

void EatFood(pSnake ps, pSnakeNode psn);//是食物的情况下吃掉食物

void NoFood(pSnakeNode psn, pSnake ps);//非食物的情况下进行移动

int KillBySelf(pSnake ps);

int KillByWall(pSnake ps);

void GameEnd(pSnake ps);