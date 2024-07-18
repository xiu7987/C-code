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

LTNode* LTBuyNode(LTNDataType x);//创建链表节点

LTNode* LTInit();//双向链表初始化

void LTPushBack(LTNode* phead, LTNDataType x);//尾插法

void PrintLTNode(LTNode* phead);//打印双向链表

void LTPushStart(LTNode* phead, LTNDataType x);//头插法

void LTDeltBack(LTNode* phead);//尾删法

void LTDeltStart(LTNode* phead);//头删法

LTNode* LTFind(LTNode* phead, LTNDataType x);//寻找指定节点

void LTDeltDesBack(LTNode* pos,LTNode* phead);//删除指定位置之后的数据

void LTInserDesBack(LTNode* pos, LTNDataType x);//在指定位置之后增加节点

void DestoLTN(LTNode* phead);//销毁双向链表
