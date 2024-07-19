#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* arr;
	int capacity;
	int top;
}Stack;

void STInit(Stack* ps);//ջ�ĳ�ʼ��

void DestoryST(Stack* ps);//ջ������

void STpush(Stack* ps, STDataType x);//ջ���ݵ�����

void STDelt(Stack* ps);//ջ���ݵ��Ƴ�

STDataType EleSTop(Stack* ps);//ȡջ��Ԫ��

int STSize(Stack* ps);//��ȡջ����ЧԪ�ظ���

bool EmptyST(Stack* ps);//�ж�ջ�Ƿ�Ϊ��

