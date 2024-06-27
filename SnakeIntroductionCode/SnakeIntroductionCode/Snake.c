#include "Snake.h"


void Set_Pos(short a,short b)
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { a,b };
	SetConsoleCursorPosition(houtput, pos);
}

void Welcom_Menu()
{
	Set_Pos(35, 10);
	wprintf(L"欢迎来到贪吃蛇小游戏");
	Set_Pos(35, 20);
	system("pause");
	system("cls");
	Set_Pos(35, 10);
	wprintf(L"按 ↑ ↓ ← →键操控贪吃蛇移动\n");
	Set_Pos(35, 11);
	wprintf(L"按小键盘‘1’或‘2’键加速或减速\n");
	Set_Pos(35, 12);
	wprintf(L"Tips:加速吃食物有额外分数加成");
	Set_Pos(35, 20);
	system("pause");
	system("cls");
}

void GameMap()
{
	Set_Pos(0, 0);
	int i = 0;
	for (; i < 58; i += 2)
	{
		wprintf(L"%lc", WALL);
	}
	Set_Pos(0, 26);
	for (i = 0; i < 58; i += 2)
	{
		wprintf(L"%lc", WALL);
	}
	for (i = 1; i < 26; i++)
	{
		Set_Pos(0, i);
		wprintf(L"%lc", WALL);
	}
	for (i = 1; i < 26; i++)
	{
		Set_Pos(56, i);
		wprintf(L"%lc", WALL);
	}
}

void SnakeInit(pSnake ps)
{
	pSnakeNode cur = NULL;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cur = (pSnakeNode)malloc(sizeof(SnakeNode));
		if (cur == NULL)
		{
			perror("SnakeInit:malloc;cur()");
			return;
		}
		cur->next = NULL;
		cur->x = POS_X + 2 * i;
		cur->y = POS_Y;
		if (ps->_pSnake == NULL)
		{
			ps->_pSnake = cur;
		}
		else
		{
			cur->next = ps->_pSnake;
			ps->_pSnake = cur;
		}
	}
	cur = ps->_pSnake;
	while (cur)
	{
		Set_Pos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	ps->_Dir = RIGHT;
	ps->_foodWeight = 10;
	ps->_SleepTime = 300;
	ps->_Socre = 0;
	ps->_Status = OK;
}

void FoodInit(pSnake ps)
{
	int x = 0;
	int y = 0;
again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 24 + 1;
	} while (x % 2 != 0);
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		if (cur->x == x && cur->y == y)
			goto again;
		cur = cur->next;
	}
	pSnakeNode cur2 = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (cur2 == NULL)
	{
		perror("malloc():FoofInit:cur2:");
		return;
	}
	cur2->next = NULL;
	cur2->x = x;
	cur2->y = y;
	Set_Pos(x, y);
	wprintf(L"%lc", FOOD);
	ps->_pFood = cur2;
	cur2 = NULL;
}

void GameStart(pSnake ps)
{
	srand((unsigned int)time(NULL));
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo = { 25,false };
	SetConsoleCursorInfo(houtput, &CursorInfo);
	Welcom_Menu();
	GameMap();
	SnakeInit(ps);
	FoodInit(ps);
	Set_Pos(65, 10);
}

void GameIntroduction()
{
	Set_Pos(65, 10);
	wprintf(L"↑ ↓ ← →进行移动\n");
	Set_Pos(65, 11);
	wprintf(L"退出游戏请按Esc\n");
	Set_Pos(65, 12);
	wprintf(L"暂停请按空格\n");
	Set_Pos(65, 13);
	wprintf(L"小键盘1，2键加减速\n");
}

void ScoreStat(pSnake ps)
{
	Set_Pos(63, 8);
	wprintf(L"当前总分数%d", ps->_Socre);
	Set_Pos(63, 7);
	wprintf(L"当前速度一个食物分数为%d", ps->_foodWeight);
}

void Pause()
{
	while (!KEY_PRESS(VK_SPACE))
	{
		Sleep(200);
	}
}

int NextIsFood(pSnakeNode psn, pSnake ps)
{
	return(psn->x == ps->_pFood->x && psn->y == ps->_pFood->y);
}

void EatFood(pSnake ps, pSnakeNode psn)
{
	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		Set_Pos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	ps->_Socre += ps->_foodWeight;
	free(ps->_pFood);
	FoodInit(ps);
}

void NoFood(pSnake ps, pSnakeNode psn)
{
	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	pSnakeNode cur = ps->_pSnake;
	while (cur->next->next)
	{
		Set_Pos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	Set_Pos(cur->next->x, cur->next->y);
	printf("  ");
	free(cur->next);
	cur->next = NULL;
}

int KillBySelf(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake->next;
	while (cur)
	{
		if ((ps->_pSnake->x == cur->x) && (ps->_pSnake->y == cur->y))
		{
			ps->_Status = KILL_BY_SELF;
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}

int KillByWall(pSnake ps)
{
	if ((ps->_pSnake->x == 0) || (ps->_pSnake->x == 56) || (ps->_pSnake->y == 0) || (ps->_pSnake->y == 26))
	{
		ps->_Status = KILL_BY_WALL;
		return 1;
	}
	return 0;
}

void SnakeMove(pSnake ps)
{
	pSnakeNode NextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (NextNode == NULL)
	{
		perror("malloc():SnakeMove:NextNode");
		return;
	}
	NextNode->x = ps->_pSnake->x;
	NextNode->y = ps->_pSnake->y;
	NextNode->next = NULL;
	switch (ps->_Dir)
	{
	case RIGHT:
	{
		NextNode->x += 2;
		NextNode->y += 0;
		break;
	}
	case LEFT:
	{
		NextNode->x -= 2;
		NextNode->y += 0;
		break;
	}
	case UP:
	{
		NextNode->x += 0;
		NextNode->y += 1;
		break;
	}
	case DOWN:
	{
		NextNode->x += 0;
		NextNode->y -= 1;
		break;
	}
	}
	if (NextIsFood(NextNode, ps))
	{
		EatFood(ps, NextNode);
	}
	else
	{
		NoFood(ps,NextNode);
	}
	KillByWall(ps);
	KillBySelf(ps);
}

void GameRun(pSnake ps)
{
	GameIntroduction();
	do
	{
		ScoreStat(ps);
		if (KEY_PRESS(VK_UP) && ps->_Dir != DOWN)
		{
			ps->_Dir =	DOWN;
		}
		else if (KEY_PRESS(VK_DOWN) && ps->_Dir != UP)
		{
			ps->_Dir = UP;
		}
		else if (KEY_PRESS(VK_LEFT) && ps->_Dir != RIGHT)
		{
			ps->_Dir = LEFT;
		}
		else if (KEY_PRESS(VK_RIGHT) && ps->_Dir != LEFT)
		{
			ps->_Dir = RIGHT;
		}
		else if (KEY_PRESS(VK_NUMPAD1))
		{
			if (ps->_SleepTime > 100)
			{
				ps->_SleepTime -= 50;
				ps->_foodWeight += 2;
			}
		}
		else if (KEY_PRESS(VK_NUMPAD2))
		{
			if (ps->_SleepTime < 500)
			{
				ps->_SleepTime += 50;
				ps->_foodWeight -= 2;
			}
		}
		else if (KEY_PRESS(VK_SPACE))
		{
			Pause();
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->_Status = END_NOMAL;
			break;
		}
		Sleep(ps->_SleepTime);
		SnakeMove(ps);
	} while (ps->_Status == OK);
}

void GameEnd(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake;
	Set_Pos(24, 12);
	switch (ps->_Status)
	{
	case END_NOMAL:
		printf("你主动退出游戏\n");
		break;
	case KILL_BY_SELF:
		printf("你咬到自己了 ,游戏结束!\n");
		break;
	case KILL_BY_WALL:
		printf("你撞墙了,游戏结束!\n");
		break;
	}
	while (cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}
}