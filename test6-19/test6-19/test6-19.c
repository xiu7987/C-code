#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdbool.h>

//int main()
//{
//	system("mode con cols=100 lines=30");
//	system("title Ã∞≥‘…ﬂ");
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_CURSOR_INFO CursorInfo;
//	GetConsoleCursorInfo(houtput, &CursorInfo);
//	CursorInfo.dwSize = 100;
//	SetConsoleCursorInfo(houtput, &CursorInfo);
//	system("pause");
//	return 0;
//}


int main()
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 10,20 };
	SetConsoleCursorPosition(houtput,pos);
	system("pause");
	return 0;
}