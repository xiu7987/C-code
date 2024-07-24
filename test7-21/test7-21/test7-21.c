#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>

typedef int HeapDataType;
void Swap(HeapDataType* x, HeapDataType* y)
{
	HeapDataType tmp = *x;
	*x = *y;
	*y = tmp;
}
void adjustdownarr(int* arr, int parents, int size)
{
	int child = parents * 2 + 1;
	while (child < size)
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

void AdjustUpHp(int* arr, int child)
{
	int parents = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[parents] > arr[child])
		{
			Swap(&arr[parents], &arr[child]);
		}
		else
		{
			break;
		}
		child = parents;
		parents = (child - 1) / 2;
	}
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
	//test2();
	int arr[] = { 13,19,12,17,18,22 };
	for (int i = 0; i < 6; i++)
	{
		AdjustUpHp(arr, i);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}