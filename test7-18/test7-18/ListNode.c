#include "ListNode.h"


LTNode* LTBuyNode(LTNDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("buynode:");
		exit(1);
	}
	newnode->val = x;
	newnode->next = newnode->prev = newnode;
	return newnode;
}

LTNode* LTInit()
{
	LTNode* pcur = LTBuyNode(-1);
	return pcur;
}

void LTPushBack(LTNode* phead, LTNDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	phead->prev->next = newnode;
	newnode->prev = phead->prev;
	newnode->next = phead;
	phead->prev = newnode;
}


void PrintLTNode(LTNode* phead)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->val);
		pcur = pcur->next;
	}
	printf("phead\n");
}

void LTPushStart(LTNode* phead, LTNDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->prev = phead;
	newnode->next = phead->next;
	phead->next = newnode;
	newnode->next->prev = newnode;
}

bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return (phead->next == phead);
}

void LTDeltBack(LTNode* phead)
{
	assert(phead && !LTEmpty(phead));
	LTNode* pcur = phead->prev;
	phead->prev->prev->next = phead;
	phead->prev = phead->prev->prev;
	free(pcur);
	pcur = NULL;
}

void LTDeltStart(LTNode* phead)
{
	assert(phead && !LTEmpty(phead));
	LTNode* pcur = phead->next;
	phead->next = phead->next->next;
	phead->next->next->prev = phead;
	free(pcur);
	pcur = NULL;
}

LTNode* LTFind(LTNode* phead,LTNDataType x)
{
	assert(phead && !LTEmpty(phead));
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->val == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	printf("ц╩спур╣╫\n");
	return NULL;
}

void LTDeltDesBack(LTNode* pos,LTNode* phead)
{
	assert(pos && (pos->next != phead));
	LTNode* pcur = pos->next;
	pos->next->next->prev = pos;
	pos->next = pos->next->next;
	free(pcur);
	pcur = NULL;
}

void LTInserDesBack(LTNode* pos,LTNDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	newnode->prev = pos;
	newnode->next = pos->next;
	newnode->next->prev = newnode;
	pos->next = newnode;
}

void DestoLTN(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	LTNode* pcur1 = NULL;
	while (pcur != phead)
	{
		pcur1 = pcur->next;
		free(pcur);
		pcur = pcur1;
	}
	free(phead);
}