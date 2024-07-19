#include "Stack.h"

void STInit(Stack* ps)
{
	assert(ps);
	ps->top = ps->capacity = 0;
	ps->arr = NULL;
}

void DestoryST(Stack* ps)
{
	assert(ps);
	assert(ps->arr);
	free(ps->arr);
	ps->capacity = ps->top = 0;
}

void STpush(Stack* ps,STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int exchange = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* new = (STDataType*)realloc(ps->arr,sizeof(STDataType) * exchange);
		if (new == NULL)
		{
			perror("new:");
			exit(1);
		}
		ps->arr = new;
		ps->capacity = exchange;
	}
	ps->arr[ps->top++] = x;
}

bool EmptyST(Stack* ps)
{
	assert(ps);
	return (ps->top == 0);
}

void STDelt(Stack* ps)
{
	assert(ps);
	assert(!EmptyST(ps));
	--ps->top;
}

STDataType EleSTop(Stack* ps)
{
	assert(ps && !EmptyST(ps));
	return ps->arr[ps->top - 1];
}

int STSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}