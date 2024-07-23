#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->arr = NULL;
	php->capacity = php->size = 0;
}

void HpCapacheck(HP* hp)
{
	if (hp->capacity == hp->size)
	{
		int exchange = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HeapDataType* tmp = (HeapDataType*)realloc(hp->arr, sizeof(HeapDataType) * exchange);
		if (tmp == NULL)
		{
			perror("realloc:tmp");
			exit(1);
		}
		hp->arr = tmp;
		hp->capacity = exchange;
	}
}

void Swap(HeapDataType* x, HeapDataType* y)
{
	HeapDataType tmp = *x;
	*x = *y;
	*y = tmp;
}

void AdjustUpHp(HP* hp, int child)
{
	int parents = (child - 1) / 2;
	while (child > 0)
	{
		if (hp->arr[parents] > hp->arr[child])
		{
			Swap(&hp->arr[parents], &hp->arr[child]);
		}
		else
		{
			break;
		}
		child = parents;
		parents = (child - 1) / 2;
	}
}

void HeapPush(HP* hp, HeapDataType x)
{
	assert(hp);
	HpCapacheck(hp);
	hp->arr[hp->size] = x;
	AdjustUpHp(hp, hp->size);
	hp->size++;
}

bool HeapEmpty(HP* hp)
{
	assert(hp);
	return (hp->size == 0);
}

void AdjustDownHp(HP* hp, int parents)
{
	int child = parents * 2 + 1;
	while (child < hp->size)
	{
		if (child + 1 < hp->size && hp->arr[child] > hp->arr[child + 1])
		{
			child++;
		}
		if (hp->arr[child] < hp->arr[parents])
		{
			Swap(&hp->arr[child], &hp->arr[parents]);
			parents = child;
			child = parents * 2 + 1;

		}
		else
		{
			break;
		}
	}
}

void adjustdownarr(int* arr, int parents, int size)
{
	int child = parents * 2 + 1;
	while(child < size)
	{
		if (child + 1 < size && arr[child] > arr[child + 1])
		{
			child++;
		}
		if (arr[child] < arr[parents])
		{
			Swap(&arr[child], &arr[parents]);
			parents = child;
			child = parents * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(HP* hp)
{
	assert(hp && !HeapEmpty(hp));
	Swap(&hp->arr[hp->size - 1], &hp->arr[0]);
	hp->size--;
	AdjustDownHp(hp,0);
}

HeapDataType HeapTop(HP* hp)
{
	assert(hp);
	return hp->arr[0];
}

int HeapSize(HP* hp)
{
	assert(hp);
	return hp->size;
}

void HeapDestory(HP* hp)
{
	assert(hp);
	if (hp->arr)
	{
		free(hp->arr);
		hp->arr = NULL;
	}
	hp->capacity = hp->size = 0;
}