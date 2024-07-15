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

void SepInit(PSL ps);//˳���ռ�ĳ�ʼ��

void SLInsertEnd(PSL ps,SLDataType x);//β�巨

void SLPrintf(PSL ps);//�����ӡ

void SLDestory(PSL ps);//�ͷſ��ٵĶ�̬�ڴ�

void CheckSpace(PSL ps);//���ռ��Ƿ��㹻

void SLInsertBeg(PSL ps,SLDataType x);//ͷ�巨

void SLDeltBeg(PSL ps);//ͷɾ��

void SLDeltEnd(PSL ps);//βɾ��

void SLDeltDes(PSL ps, int pos);//ָ��λ��ɾ��

void SLInsertDes(PSL ps, int pos, SLDataType x);//ָ��λ����������



