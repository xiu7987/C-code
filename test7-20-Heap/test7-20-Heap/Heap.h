#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>

typedef int HeapDataType;
typedef struct Heap
{
	HeapDataType* arr;
	int capacity;
	int size;
}HP;

void HeapInit(HP* php);//�ѵĳ�ʼ��

void HeapPush(HP* hp, HeapDataType x);//����ڲ�������

void HpCapacheck(HP* hp);//����ڴ�ռ��С

bool HeapEmpty(HP* hp);//�����Ч�����Ƿ�Ϊ0

void HeapPop(HP* hp);//ɾ���������ݣ�����С��Ҳ���ǶѶ���ʼɾ��

HeapDataType HeapTop(HP* hp);//��ȡ����ջ��Ԫ��

int HeapSize(HP* hp);//��ȡ������Ч���ݸ���

void HeapDestory(HP* hp);//���ٶ�

void AdjustDownHp(HP* hp, int parents);//���µ�����

void AdjustUpHp(HP* hp, int child);//���ϵ�����

void adjustdownarr(int* arr, int parents, int size);//����֪�����������ݵ���������½���

void Swap(HeapDataType* x, HeapDataType* y);
