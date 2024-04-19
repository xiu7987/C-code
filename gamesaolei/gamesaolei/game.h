#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define LEI 80
void Menu();//打印菜单
void Initialization(char face[ROWS][COLS], int rows, int cols, char set);
//初始化数组

void print(char face[ROWS][COLS], int row, int col);
//打印数组

void mailei(char hide[ROWS][COLS], int row, int col);
//为数组中的元素随机埋雷

void mineclear(char hide[ROWS][COLS], char face[ROWS][COLS], int row, int col);
//执行扫雷

int facemine(char face[ROWS][COLS], int r, int c);