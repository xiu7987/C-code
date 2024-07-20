#include "Queue.h"

void test0()
{
	Queue pq;
	QueueInit(&pq);
	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);
	printf("size: %d\n", pq.size);
	printf("head val %d\n", pq.phead->val);
	printf("tail val %d\n", pq.ptail->val);
	DestoryQueue(&pq);
}

int main()
{
	test0();
	return 0;
}