#include "snake.h"

void test()
{
	int ch = 0;
	do
	{
		Snake snake = { 0 };
		GameStart(&snake);//游戏初始化
		GameRun(&snake);//游戏运行
		GameEnd(&snake);//游戏的善后处理
		REPOSITION(20, 15);
		printf("再来一局吗？(y/n):");
		ch = getchar();
		getchar();
	} while (ch == 'y');
	system("cls");
}

int main()
{
	setlocale(LC_ALL, "");
	test();
	return 0;
}