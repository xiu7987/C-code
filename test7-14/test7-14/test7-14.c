#include <stdio.h>
#include <time.h>
#include <assert.h>

void bubble_sort(int* arr, size_t sz)
{
	assert(arr);
	int exchange = 0;
	int a = 0;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

int main()
{
	int arr[10] = { 1,4,2,3,8,5,7,9,0,11 };
	size_t sz = sizeof(arr);
	int sz1 = sz / 4;
	bubble_sort(arr, sz1);
	int i = 0;
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}

void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; ++k)
	{
		++count;
	}
	for (int k = 0; k < N; ++
		k)
	{
		++count;
	}
	printf("%d\n", count);
}

void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

void func5(int n)
{
	int cnt = 1;
	while (cnt < n)
	{
		cnt *= 2;
	}
}

long long Fac(size_t N)
{
	if (N == 0)
		return 1;
	return Fac(N - 1) * N;
}