#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* arr;
	int capacity;
	int top;
}Stack;

void InsertSort(int* arr, int n);

void ShellSort(int* arr, int n);

void adjustdownarr(int* arr, int parents, int size);

void HeapSort(int* arr, int n);

void SelectSort(int* arr, int n);

void BubbleSort(int* arr, int n);

int _QuickSort1(int* arr, int left, int right);

void QuickSort(int* arr, int left, int right);

int _QuickSort2(int* arr, int left, int right);

int _QuickSort3(int* arr, int left, int right);

void QuickSortNone(int* arr, int left, int right);

void STInit(Stack* ps);//栈的初始化

void DestoryST(Stack* ps);//栈的销毁

void STpush(Stack* ps, STDataType x);//栈数据的增加

void STDelt(Stack* ps);//栈数据的移除

STDataType EleSTop(Stack* ps);//取栈顶元素

int EmptyST(Stack* ps);