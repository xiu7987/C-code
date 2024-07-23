#include "Heap.h"
#define _CRT_SECURE_NO_WARNINGS 0

void test()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp, 10);
	HeapPush(&hp, 20);
	HeapPush(&hp, 9);
	HeapPush(&hp, 18);
	HeapPush(&hp, 23);
	HeapPush(&hp, 99);
	HeapPush(&hp, 4);
	printf("栈顶元素为：%d\n", HeapTop(&hp));
	printf("栈内有效数据个数为:%d\n", HeapSize(&hp));
	HeapPop(&hp);
	HeapPop(&hp);
	HeapPop(&hp);
	printf("栈内有效数据个数为:%d", HeapSize(&hp));
	HeapPop(&hp);
	HeapPop(&hp);

	HeapDestory(&hp);
}

void test1()
{
	srand(time(0));
	int n = 10000;
	FILE* file = fopen("data.txt", "w");
	if (file == NULL)
	{
		perror("open file!");
		exit(1);
	}
	int x = 0;
	for (size_t i = 0; i < n; i++)
	{
		int x = rand() % 100000;
		fprintf(file, "%d\n", x);
	}
	fclose(file);
}

void test2()
{
	FILE* file = fopen("data.txt", "r");
	if (file == NULL)
	{
		perror("fail open!");
		exit(2);
	}
	int k = 0;
	int arr[6] = { 0 };
	printf("请输入所要取的数据数量:");
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++)
	{
		fscanf_s(file, "%d", &arr[i]);
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		adjustdownarr(arr, i, k);
	}
	int x = 0;
	while (fscanf_s(file, "%d", &x) != EOF)
	{
		if (x > arr[0])
		{
			Swap(&x, &arr[0]);
			adjustdownarr(arr, 0, k);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//test1();
	test2();
	return 0;
}