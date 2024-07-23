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

void HeapInit(HP* php);//堆的初始化

void HeapPush(HP* hp, HeapDataType x);//向堆内插入数据

void HpCapacheck(HP* hp);//检查内存空间大小

bool HeapEmpty(HP* hp);//检查有效数据是否为0

void HeapPop(HP* hp);//删除堆中数据（从最小数也就是堆顶开始删）

HeapDataType HeapTop(HP* hp);//获取堆中栈顶元素

int HeapSize(HP* hp);//获取堆中有效数据个数

void HeapDestory(HP* hp);//销毁堆

void AdjustDownHp(HP* hp, int parents);//向下调整法

void AdjustUpHp(HP* hp, int child);//向上调整法

void adjustdownarr(int* arr, int parents, int size);//在已知堆中所有数据的情况下向下建堆

void Swap(HeapDataType* x, HeapDataType* y);
