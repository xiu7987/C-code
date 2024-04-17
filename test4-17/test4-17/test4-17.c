#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int v = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (v = 1; v <= i; v++)
//			printf("%dx%d = %d  ", i, v, i * v);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s ("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("%d是闰年", n);
//	}
//	else printf("%d不是闰年", n);
//	return 0;
//}
void int1(int arr[10], int r)
{
	for (int i = 0; i <= r; i++)
	arr[i] = 0;
}
void scanf1(int arr[10], int r)
{
	int z = 0;
	for (int z = 0; z <= r; z++)
	scanf_s("%d", &arr[z]);
}
void print1(int arr[10],int r)
{
	for (int i = 0;i <= r;i++)
	printf("%d ", arr[i]);
	printf("\n");
}
void reserve(int arr[10], int r)
{
	for (int i = 0; i <= r; i++)
	{
		if (r - i != 0 && r - i != -1)
		{
			int a = 0;
			a = arr[i];
			arr[i] = arr[r - i];
			arr[r - i] = a;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int r = 9;
	int1(arr,r);
	scanf1(arr, r);
	print1(arr, r);
	reserve(arr, r);
	print1(arr, r);
	return 0;
}