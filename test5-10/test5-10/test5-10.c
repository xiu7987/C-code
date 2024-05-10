#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int str_cmp_sizeof(const void* p1, const void* p2)
//{
//	return strcmp((*(struct stu*)p1).name, (*(struct stu*)p2).name);
//}
//int int_cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int flo_cmp(const void* p1, const void* p2)
//{
//	if (*(double*)p1 > *(double*)p2)
//		return 1;
//	else if (*(double*)p1 > *(double*)p2)
//		return -1;
//	else return 0;
//}
//int str_cmp_int(const void* p1, const void* p2)
//{
//	return (*(struct stu*)p1).age - (*(struct stu*)p2).age;
//}
//int int_pointer_cmp(const void* p1, const void* p2)
//{
//	if ((int*)p1 > (int*)p2)
//		return 1;
//	else if ((int*)p1 > (int*)p2)
//		return -1;
//	else return 0;
//}
//int main()
//{
//	struct stu arr[3] = { {"zhangsan",20},{"lisi",30},{"yangwu",20} };
//	int arr1[10] = { 2,3,11,45,19,1,23,67,7,12 };
//	int arr4[10] = { 2,3,11,45,19,1,23,67,7,12 };
//	int arr5[10] = { 2,3,11,45,19,1,23,67,7,12 };
//	double arr2[7] = { 1.4,5.6,2.9,1.1,9.1,6.1,0.2 };
//	int* arr3[3] = { arr4,arr1,arr5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	qsort(arr, sz, sizeof(arr[0]), str_cmp_sizeof);
//	qsort(arr, sz, sizeof(arr[0]), str_cmp_int);
//	qsort(arr1, sz1, sizeof(arr1[0]), int_cmp);
//	qsort(arr2, sz2, sizeof(arr2[0]), flo_cmp);
//	qsort(arr3, sz3, sizeof(arr3[0]), int_pointer_cmp);
//	return 0;
//}
void bubble_sort(void* arr, size_t sz, size_t size, int (*cmp)(const void*, const void*));
int cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void swap(char* p1, char* p2, size_t size)
{
	char tmp = 0;
	int j = 0;
	for (j = 0; j < size; j++)
	{
		tmp = *(p1+j);
		*(p1+j)= *(p2+j);
		*(p2 + j) = tmp;
	}
}
void bubble_sort(void* name,size_t sz,size_t size,int (*cmp)(const void* p1,const void* p2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int count = 0;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)name+j*size,(char*)name+(j+1)*size) > 0)
			{
				swap((char*)name + j * size, (char*)name + (j + 1) * size, size);
				count++;
			}
		}
		if (count == 0)
			break;
	}
}
int main()
{
	int arr[10] = { 2,3,1,7,4,6,5,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//原始局限性冒泡排序（仅可以排列整型数组）
	//bubble_sort(arr, sz);
	//改进后的冒泡排序（仿qsort)
	bubble_sort(arr, sz,sizeof(arr[0]),cmp);
	return 0;
}