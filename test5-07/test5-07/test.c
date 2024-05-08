#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=0;i<sz;i++)
//	scanf_s("%d", &arr[i]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//void my_scanf(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d",p);
//		p++;
//	}
//}
//void bubble_sort(int arr[], int sz)
//{
//	int t = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				flag = 1;
//				t = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = t;
//			}
//		}
//		if (!flag)
//			break;
//		else flag = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	my_scanf(p, sz);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int my_strcmp(char arr1[], char arr2[], int sz1, int sz2)
//{
//	if (sz1 != sz2)
//		return 0;
//	int i = 0;
//	int j = 0;
//	char arr3[20] = { 0 };
//	for (i = 0; i <= sz1; i++)
//	{
//		strcpy (arr3, arr1 + i);
//		if (strcmp(arr3, arr1)) 
//		{
//			for (j = 0; j < i; j++)
//			{
//				arr3[sz1 - i + j] = arr1[j];
//			}
//		}
//		if (!strcmp(arr3, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	int r = my_strcmp(arr1, arr2, sz1, sz2);
//	if (r)
//		printf("两个字符串等价");
//	else printf("两个字符串不等价");
//	return 0;
//}
//int main()
//{
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c为凶手\n", killer);
//	}
//	return 0;
//}
//#define N 12
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[N][N] = { {1},{1,1} };
//	for (i = 2; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//杨氏三角查询数字（时间复杂度低于O(n))
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (n > arr[3][i])
//			continue;
//		else if (n < arr[3][i])
//			break;
//		else
//		{
//			printf("找到了，其坐标为%d %d", 4, i + 1);
//			return 0;
//		}
//	}
//	if (arr[1][i] > n && arr[2][i] == n)
//	{
//		printf("找到了，其坐标为%d %d", 3, i + 1);
//	}
//	else if (arr[1][i] < n && arr[0][i] == n)
//	{
//		printf("找到了，其坐标为%d %d", 1, i + 1);
//	}
//	else if (arr[1][i] == n)
//		printf("找到了，其坐标为%d %d", 2, i + 1);
//	else printf("找不到");
//	return 0;
//}
#define ROW 4
#define COL 4

typedef struct Point
{
	int x;
	int y;
}Point;
Point Find(int arr[ROW][COL], int f)
{
	int x = 0;
	int y = COL - 1;
	Point ret = { -1, -1 };
	while ((x <= ROW - 1) && (y >= 0))
	{
		if (f == arr[x][y])
		{
			ret.x = x;
			ret.y = y;
			return ret;
		}
		else if (f < arr[x][y])
		{
			--y;
		}
		else
		{
			++x;
		}
	}
	return ret;
}

int main()
{
	int f = 0;
	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10,11,12,13,14,15,16};
	scanf("%d", &f);
	Point ret = Find(a, f);
	if ((ret.x != -1) && (ret.y != -1))
	{
		printf("找到了，下标为(%d,%d)\n", ret.x, ret.y);
	}
	else
	{
		printf("没找到！\n");
	}
	return 0;
}