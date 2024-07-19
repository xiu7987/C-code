#include "Stack.h"

void test0()
{
	Stack ST;
	STInit(&ST);
	STpush(&ST, 1);
	STpush(&ST, 2);
	STpush(&ST, 3);
	STpush(&ST, 4);
	printf("size: %d\n", STSize(&ST));
	while (!EmptyST(&ST))
	{
		printf("%d ", EleSTop(&ST));
		STDelt(&ST);
	}
	printf("size: %d\n", STSize(&ST));
	DestoryST(&ST);
}

int main()
{
	test0();
	return 0;
}