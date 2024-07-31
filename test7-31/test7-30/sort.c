#include "sort.h"

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

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

void STpush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int exchange = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* new = (STDataType*)realloc(ps->arr, sizeof(STDataType) * exchange);
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

int EmptyST(Stack* ps)
{
	assert(ps);
	return (ps->top == 0);
}
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > tmp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}

void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > tmp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tmp;
		}
	}
}

void adjustdownarr(int* arr, int parents, int size)
{
	int child = parents * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && arr[child] < arr[child + 1])
		{
			child++;
		}
		if (arr[child] > arr[parents])
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

void HeapSort(int* arr, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		adjustdownarr(arr, i, n);
	}
	while (n--)
	{
		Swap(&arr[0], &arr[n]);
		adjustdownarr(arr, 0, n-1);
	}
}

void SelectSort(int* arr, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int max = begin;
		int min = begin;
		for(int i = begin;i <= end;i++)
		{
			if (arr[max] < arr[i])
			{
				max = i;
			}
			if (arr[min] > arr[i])
			{
				min = i;
			}
		}
		if (max == begin)
		{
			max = min;
		}
		Swap(&arr[min], &arr[begin]);
		Swap(&arr[max], &arr[end]);
		begin++;
		end--;
	}
}

void BubbleSort(int* arr, int n)
{
	int exchange = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				exchange = 1;
				Swap(&arr[j], &arr[j + 1]);
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}
}

int _QuickSort1(int* arr, int left, int right)
{
	int key = left;
	++left;
	while (left <= right)
	{
		while (left <= right && arr[left] < arr[key])
		{
			left++;
		}
		while (left <= right && arr[right] > arr[key])
		{
			right--;
		}
		if (left <= right)
		{
			Swap(&arr[left++], &arr[right--]);
		}
	}
	Swap(&arr[right], &arr[key]);
	return right;
}

int _QuickSort2(int* arr, int left, int right)
{
	int key = arr[left];
	int hole = left;
	while (left < right)
	{
		while (left < right && arr[right] >= key)
		{
			--right;
		}
		Swap(&arr[hole], &arr[right]);
		hole = right;
		while (left < right && arr[left] <= key)
		{
			left++;
		}
		Swap(&arr[hole], &arr[left]);
		hole = left;
	}
	arr[hole] = key;
	return hole;
}

int _QuickSort3(int* arr, int left, int right)
{
	int key = left;
	int slow = left;
	int fast = left + 1;
	while (fast <= right)
	{
		if (arr[fast] < arr[key] && ++slow != fast)
		{
			Swap(&arr[fast], &arr[slow]);
		}
		fast++;
	}
	Swap(&arr[slow], &arr[key]);
	return slow;
}

void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int key = _QuickSort3(arr, left, right);
	QuickSort(arr, left, key - 1);
	QuickSort(arr, key + 1, right);
}

void QuickSortNone(int* arr, int left, int right)
{
	Stack st;
	STInit(&st);
	STpush(&st, right);
	STpush(&st, left);
	while (!EmptyST(&st))
	{
		int begin = EleSTop(&st);
		STDelt(&st);
		int end = EleSTop(&st);
		STDelt(&st);
		int meet = _QuickSort3(arr, begin, end);
		if (begin < meet - 1)
		{
			STpush(&st, meet-1);
			STpush(&st, begin);
		}
		if (end > meet + 1)
		{
			STpush(&st, end);
			STpush(&st, meet+1);
		}
	}
	DestoryST(&st);
}

void _MergeSort(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_MergeSort(arr, left, mid, tmp);
	_MergeSort(arr, mid + 1, right, tmp);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = begin1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[index++] = arr[begin1++];
		}
		else {
			tmp[index++] = arr[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[index++] = arr[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = arr[begin2++];
	}
	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}
}

void MergeSort(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(arr, 0, n - 1, tmp);
	free(tmp);
}


void CountSort(int* arr, int n)
{
	int max = arr[0], min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		perror("count fail!");
		exit(1);
	}
	memset(count, 0, range * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		count[arr[i] - min]++;
	}
	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			arr[index++] = i + min;
		}
	}
}