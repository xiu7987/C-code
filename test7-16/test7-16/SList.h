#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType;

typedef struct SLTistNode
{
	SLDataType Data;
	struct SLTistNode* next;
}SLTNode,*PSLTNode;

void SLTprint(PSLTNode* pphead);

PSLTNode SLTBuyNode(SLDataType x);

void SLTPushBack(PSLTNode* pphead, SLDataType x);//尾插法

void SLTPushFront(PSLTNode* pphead, SLDataType x);//头插法

void SLTPopBack(PSLTNode* pphead);//尾部删除

void SLTPopFront(PSLTNode* pphead);//头部删除

SLTNode* SLTFind(PSLTNode phead, SLDataType x);//查找数据

void SLTErase(PSLTNode* pphead, PSLTNode pos);//删除指定数据

void SLTInsertAfter(PSLTNode pos, SLDataType x);//在指定位置之后插⼊数据

void SLTEraseAfter(PSLTNode pos);//删除pos之后的结点

void SListDestroy(PSLTNode* pphead);//销毁链表