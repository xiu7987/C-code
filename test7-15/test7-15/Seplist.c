#include "Seplist.h"

void SepInit(PSL ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

void CheckSpace(PSL ps)
{
	if (ps->capacity == ps->size)
	{
		int excapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, excapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("SLInsertEnd,tmp:");
			return 1;
		}
		ps->arr = tmp;
		ps->capacity = excapacity;
	}
}

void SLInsertEnd(PSL ps,SLDataType x)
{

	assert(ps);
	CheckSpace(ps);
	ps->arr[ps->size++] = x;
}

void SLInsertBeg(PSL ps,SLDataType x)
{
	assert(ps);
	CheckSpace(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPrintf(PSL ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	printf("\n");
}

void SLDestory(PSL ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->capacity = 0;
	ps->size = 0;
	ps->arr = NULL;
}

void SLDeltBeg(PSL ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SLDeltEnd(PSL ps)
{
	assert(ps);
	ps->size--;
}

void SLDeltDes(PSL ps, int pos)
{
	assert(ps);
	assert(pos>=0 && pos<ps->size);
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SLInsertDes(PSL ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	CheckSpace(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}