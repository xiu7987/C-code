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

void STInit(Stack* ps);//ջ�ĳ�ʼ��

void DestoryST(Stack* ps);//ջ������

void STpush(Stack* ps, STDataType x);//ջ���ݵ�����

void STDelt(Stack* ps);//ջ���ݵ��Ƴ�

STDataType EleSTop(Stack* ps);//ȡջ��Ԫ��

int EmptyST(Stack* ps);