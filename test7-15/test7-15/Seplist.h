#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct SepList
{
	SLDataType* arr;
	int capacity;
	int size;
}SL,*PSL;

void SepInit(PSL ps);//顺序表空间的初始化

void SLInsertEnd(PSL ps,SLDataType x);//尾插法

void SLPrintf(PSL ps);//检验打印

void SLDestory(PSL ps);//释放开辟的动态内存

void CheckSpace(PSL ps);//检查空间是否足够

void SLInsertBeg(PSL ps,SLDataType x);//头插法

void SLDeltBeg(PSL ps);//头删法

void SLDeltEnd(PSL ps);//尾删法

void SLDeltDes(PSL ps, int pos);//指定位置删除

void SLInsertDes(PSL ps, int pos, SLDataType x);//指定位置增加数据



