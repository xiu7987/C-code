#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int LTNDataType;
typedef struct ListNode
{
	LTNDataType val;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;

LTNode* LTBuyNode(LTNDataType x);//��������ڵ�

LTNode* LTInit();//˫�������ʼ��

void LTPushBack(LTNode* phead, LTNDataType x);//β�巨

void PrintLTNode(LTNode* phead);//��ӡ˫������

void LTPushStart(LTNode* phead, LTNDataType x);//ͷ�巨

void LTDeltBack(LTNode* phead);//βɾ��

void LTDeltStart(LTNode* phead);//ͷɾ��

LTNode* LTFind(LTNode* phead, LTNDataType x);//Ѱ��ָ���ڵ�

void LTDeltDesBack(LTNode* pos,LTNode* phead);//ɾ��ָ��λ��֮�������

void LTInserDesBack(LTNode* pos, LTNDataType x);//��ָ��λ��֮�����ӽڵ�

void DestoLTN(LTNode* phead);//����˫������
