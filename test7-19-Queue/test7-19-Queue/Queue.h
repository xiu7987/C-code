#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

typedef int QueueDataType;
typedef struct QueueNode
{
	QueueDataType val;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue
{
	QueueNode* phead;
	QueueNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* ps);//�Զ��г�ʼ��

QueueNode* QueueBuyNode(QueueDataType x);//�����½ڵ�

void QueuePush(Queue* ps, QueueDataType x);//�Զ��в����½ڵ�

int QueueEmpty(Queue* ps);//�ж϶����Ƿ�����ЧԪ��

void QueuePop(Queue* ps);//����ɾ��Ԫ��

QueueDataType ElePhead(Queue* ps);//��ȡ��ͷԪ��

QueueDataType ElePtail(Queue* ps);//��ȡ��βԪ��

void DestoryQueue(Queue* ps);//���ٶ���