#include "Snake.h"

void test()
{
	int ch = 0;
	do
	{
		Snake snake = { 0 };
		GameStart(&snake);
		GameRun(&snake);
		GameEnd(&snake);
		Set_Pos(20, 15);
		printf("再来一局吗？(y/n):");
		ch = getchar();
		getchar();
	} while (ch == 'y');
}

int main()
{
	setlocale(LC_ALL, "");
	test();
	return 0;
}