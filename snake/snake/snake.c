#include "snake.h"

void test()
{
	int ch = 0;
	do
	{
		Snake snake = { 0 };
		GameStart(&snake);//��Ϸ��ʼ��
		GameRun(&snake);//��Ϸ����
		GameEnd(&snake);//��Ϸ���ƺ���
		REPOSITION(20, 15);
		printf("����һ����(y/n):");
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