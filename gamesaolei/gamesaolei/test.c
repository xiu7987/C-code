#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	begin:
	Menu();
	do 
	{
		scanf_s("%d", &input);
		if (input == 1)
		{
			char face[ROWS][COLS];
			char hide[ROWS][COLS];
			Initialization(face, ROWS, COLS,'*');
			Initialization(hide, ROWS, COLS,'0');//����ʾ�����ʾ������г�ʼ��
			mailei(hide, ROW, COL);//����
			print(face, ROW, COL);//��ӡ�м�9*9������
			mineclear(hide, face, ROW, COL);//ɨ�׵��������
			print(hide, ROW, COL);//������Ĵ�ӡ����ʾ�����׵�λ��
			goto begin;
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else printf("������������������\n");
	}while (input);
	return 0;
}