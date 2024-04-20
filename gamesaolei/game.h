#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define LEI 10
#define ROW1 16
#define COL1 16
#define ROWS1 ROW + 2 + 7
#define COLS1 COL + 2 + 7
#define LEI1 40
#define ROW2 16 + 14
#define COL2 16
#define ROWS2 ROW + 2 + 7 + 14
#define COLS2 COL + 2 + 7
#define LEI2 99
void Menu();//打印菜单
void Initialization(char face[ROWS][COLS], int rows, int cols, char set);
//初始化数组

void print(char face[ROWS][COLS], int row, int col);
//打印数组

void mailei(char hide[ROWS][COLS], int row, int col,int lei);
//为数组中的元素随机埋雷

void mineclear(char hide[ROWS][COLS], char face[ROWS][COLS], int row, int col,int lei);
//执行扫雷

void Initialization1(char face[ROWS1][COLS1], int rows, int cols, char set);
void print1(char face[ROWS1][COLS1], int row, int col);
void mailei1(char hide[ROWS1][COLS1], int row, int col, int lei);
int facemine1(char face[ROWS1][COLS1], int r, int c);
void mineclear1(char hide[ROWS1][COLS1], char face[ROWS1][COLS1], int row, int col, int lei);

void mineclear2(char hide[ROWS2][COLS2], char face[ROWS2][COLS2], int row, int col, int lei);
int facemine2(char face[ROWS2][COLS2], int r, int c);
void mailei2(char hide[ROWS2][COLS2], int row, int col, int lei);
void print2(char face[ROWS2][COLS2], int row, int col);
void Initialization2(char face[ROWS2][COLS2], int rows, int cols, char set);