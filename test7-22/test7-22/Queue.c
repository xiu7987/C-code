#include "Queue.h"

QueueNode* QueueBuyNode(QueueDataType x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		perror("malloc:newnode:");
		exit(1);
	}
	newnode->val = x;
	newnode->next = NULL;
	return newnode;
}

int QueueEmpty(Queue* ps)
{
	assert(ps);
	return (ps->phead == NULL && ps->ptail == NULL);
}

void QueuePush(Queue* ps,QueueDataType x)
{
	assert(ps);
	if (QueueEmpty(ps))
	{
		ps->ptail = ps->phead = QueueBuyNode(x);
	}
	else
	{
		ps->ptail->next = QueueBuyNode(x);
		ps->ptail = ps->ptail->next;
	}
	ps->size++;
}

void QueuePop(Queue* ps)
{
	assert(ps && !QueueEmpty(ps));
	QueueNode* pcur = ps->phead->next;
	if (ps->phead == ps->ptail)
	{
		free(ps->phead);
		ps->phead = ps->ptail = NULL;
	}
	else
	{
		free(ps->phead);
		ps->phead = pcur;
	}
	ps->size--;
}

void QueueInit(Queue* ps)
{
	assert(ps);
	ps->phead = ps->ptail = NULL;
	ps->size = 0;
}

QueueDataType ElePhead(Queue* ps)
{
	assert(ps && !QueueEmpty(ps));
	return ps->phead->val;
}

QueueDataType ElePtail(Queue* ps)
{
	assert(ps && !QueueEmpty(ps));
	return ps->ptail->val;
}

void DestoryQueue(Queue* ps)
{
	assert(ps);
	ps->ptail = NULL;
	while (ps->phead)
	{
		QueueNode* pcur = ps->phead;
		ps->phead = ps->phead->next;
		free(pcur);
	}
	ps->size = 0;
}

