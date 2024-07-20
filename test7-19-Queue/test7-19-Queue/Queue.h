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

void QueueInit(Queue* ps);//对队列初始化

QueueNode* QueueBuyNode(QueueDataType x);//申请新节点

void QueuePush(Queue* ps, QueueDataType x);//对队列插入新节点

int QueueEmpty(Queue* ps);//判断队列是否有有效元素

void QueuePop(Queue* ps);//队列删除元素

QueueDataType ElePhead(Queue* ps);//获取队头元素

QueueDataType ElePtail(Queue* ps);//获取队尾元素

void DestoryQueue(Queue* ps);//销毁队列