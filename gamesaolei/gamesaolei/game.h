#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define LEI 80
void Menu();//��ӡ�˵�
void Initialization(char face[ROWS][COLS], int rows, int cols, char set);
//��ʼ������

void print(char face[ROWS][COLS], int row, int col);
//��ӡ����

void mailei(char hide[ROWS][COLS], int row, int col);
//Ϊ�����е�Ԫ���������

void mineclear(char hide[ROWS][COLS], char face[ROWS][COLS], int row, int col);
//ִ��ɨ��

int facemine(char face[ROWS][COLS], int r, int c);