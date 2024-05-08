#include <stdio.h>
#include <string.h>
//int mystrlen(char arr[], char* p)
//{
//	int count = 0;
//	while (*p != '\0' && p != NULL)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	char* p = arr;
//	int r = mystrlen(arr,p);
//	printf("%d", r);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


void Movenum(int a[], int sz)
{
	int* left = a;
	int* right = a + sz - 1;
	while (left < right)
	{
		while (((left < right) && (*left) % 2 != 0))
		{
			left++;
		}
		while (((left < right) && (*right) % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int i = 0;
	int sz = (sizeof(a) / sizeof(a[0]));
	Movenum(a, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}