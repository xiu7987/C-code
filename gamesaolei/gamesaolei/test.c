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
			int r = 0;
			arr:
			printf("��ѡ���Ѷ�\n");
			printf("1.��\n");
			printf("2.�е�\n");
			printf("3.����\n");
			scanf_s("%d",&r );
			if (r == 1)
			{
				char face[ROWS][COLS];
				char hide[ROWS][COLS];
				Initialization(face, ROWS, COLS, '*');
				Initialization(hide, ROWS, COLS, '0');//����ʾ�����ʾ������г�ʼ��
				mailei(hide, ROW, COL, LEI);//����
				print(face, ROW, COL);//��ӡ�м�9*9������
				mineclear(hide, face, ROW, COL, LEI);//ɨ�׵��������
				print(hide, ROW, COL);//������Ĵ�ӡ����ʾ�����׵�λ��
				goto begin;
			}
			else if (r == 2)
			{
				char face[ROWS1][COLS1];
				char hide[ROWS1][COLS1];
				Initialization1(face, ROWS1, COLS1, '*');
				Initialization1(hide, ROWS1, COLS1, '0');//����ʾ�����ʾ������г�ʼ��
				mailei1(hide, ROW1, COL1, LEI1);//����
				print1(face, ROW1, COL1);//��ӡ�м�9*9������
				mineclear1(hide, face, ROW1, COL1, LEI1);//ɨ�׵��������
				print1(hide, ROW1, COL1);//������Ĵ�ӡ����ʾ�����׵�λ��
				goto begin;
			}
			else if (r == 3)
			{
				char face[ROWS2][COLS2];
				char hide[ROWS2][COLS2];
				Initialization2(face, ROWS2, COLS2, '*');
				Initialization2(hide, ROWS2, COLS2, '0');//����ʾ�����ʾ������г�ʼ��
				mailei2(hide, ROW2, COL2, LEI2);//����
				print2(face, ROW2, COL2);//��ӡ�м�9*9������
				mineclear2(hide, face, ROW2, COL2, LEI2);//ɨ�׵��������
				print2(hide, ROW2, COL2);//������Ĵ�ӡ����ʾ�����׵�λ��
				goto begin;
			}
			else 
			{
				printf("������������������\n");
				goto arr;
			}
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