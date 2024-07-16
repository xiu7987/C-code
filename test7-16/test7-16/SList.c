#include "SList.h"

void SLTprint(PSLTNode* pphead)
{
	PSLTNode pcur = *pphead;
	while (pcur)
	{
		printf("%d->", pcur->Data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

PSLTNode SLTBuyNode(SLDataType x)
{
	PSLTNode node = (PSLTNode)malloc(sizeof(SLTNode));
	if (node == NULL)
	{
		perror("newnode:");
		exit(1);
	}
	node->Data = x;
	node->next = NULL;
	return node;
}

void SLTPushBack(PSLTNode* pphead, SLDataType x)
{
	assert(pphead);
	PSLTNode newcode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newcode;
	}
	else
	{
		PSLTNode pcur = *pphead;
		while (pcur->next)
		{
			pcur = pcur->next;
		}
		pcur->next = newcode;
	}
}

void SLTPushFront(PSLTNode* pphead, SLDataType x)
{
	assert(pphead);
	PSLTNode newcode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newcode;
	}
	else
	{
		newcode->next = *pphead;
		*pphead = newcode;
	}
}

void SLTPopBack(PSLTNode* pphead)
{
	assert(pphead && *pphead);
	PSLTNode pcur = *pphead;
	PSLTNode pcur1 = NULL;
	while (pcur->next)
	{
		pcur1 = pcur;
		pcur = pcur->next;
	}
	if (pcur1)
	{
		pcur1->next = NULL;
		free(pcur);
		pcur = NULL;
	}
	else
	{
		free(*pphead);
		*pphead = NULL;
	}
}

void SLTPopFront(PSLTNode* pphead)
{
	assert(pphead && *pphead);
	PSLTNode pcur = *pphead;
	*pphead = pcur->next;
	free(pcur);
	pcur = NULL;
}

PSLTNode SLTFind(PSLTNode phead, SLDataType x)
{
	assert(phead);
	PSLTNode pcur = phead;
	while (pcur)
	{
		if (pcur->Data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

void SLTErase(PSLTNode* pphead, PSLTNode pos)
{
	assert(pphead && *pphead && pos);
	PSLTNode pcur = *pphead;
	if (pcur != pos)
	{
		while (pcur->next != pos)
		{
			pcur = pcur->next;
		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
	else
	{
		*pphead = pcur->next;
		free(pos);
		pos = NULL;
	}
}

void SLTInsertAfter(PSLTNode pos, SLDataType x)
{
	assert(pos);
	PSLTNode newcode = SLTBuyNode(x);
	newcode->next = pos->next;
	pos->next = newcode;
}

void SLTEraseAfter(PSLTNode pos)
{
	assert(pos && pos->next);
	PSLTNode del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}

void SListDestroy(PSLTNode* pphead)
{
	assert(pphead && *pphead);
	PSLTNode pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}