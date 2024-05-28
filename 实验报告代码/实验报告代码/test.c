#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n = 0, m = 0;
//	int i = 0;
//	int arr[1000] = { 0 };
//	scanf_s("%d", &n);//确定输入数据的个数
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &arr[i]);//为数组中的元素赋确定值,注意需按升序输入
//	scanf_s("%d", &m);//输入需要查找的值
//	int left = 0;
//	int right = n - 1;
//	if (arr[left] > m || arr[right] < m)
//		printf("-1");
//	else
//		while (left <= right)
//		{
//			int ave = (left + right) / 2;
//			if (arr[ave] <= m)
//				left = ave;
//			else if (arr[ave] >= m)
//				right = ave;
//			if (arr[left] == m)
//			{
//				printf("找到了，对应元素的下标为%d", left);
//				break;
//			}
//			else if (arr[right] == m)
//			{
//				printf("找到了，对应元素的下标为%d", right);
//				break;
//			}
//			else continue;
//		}
//	if (left > right)
//		printf("-1");
//	else return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int v = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (v = 1; v <= i; v++)
//			printf("%dx%d = %d ", i, v, i * v);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int v = 0;
//	scanf_s("%d %d", &n, &m);
//	for (i = n + 1; i > n && i < m; i++)
//	{
//		for (v = 2; v < i; v++)
//		{
//			if (i % v == 0)
//			{
//				goto begin;
//			}
//			else continue;
//		}
//		printf("%d\n", i);
//	begin:;
//	}
//	return 0;
//}



//int factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else return n * factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = factorial(n);
//	printf("%d", r);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int sum = n;
//	for (i = n - 1; i > 0; i--)
//		sum *= i;
//	printf("%d", sum);
//	return 0;
//}


//void bubble_sort(void* arr, size_t sz, size_t size, int (*cmp)(const void*, const void*));
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void swap(char* p1, char* p2, size_t size)
//{
//	char tmp = 0;
//	int j = 0;
//	for (j = 0; j < size; j++)
//	{
//		tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void bubble_sort(void* name, size_t sz, size_t size, int (*cmp)(const void* p1, const void* p2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)name + j * size, (char*)name + (j + 1) * size) > 0)
//			{
//				swap((char*)name + j * size, (char*)name + (j + 1) * size, size);
//				count++;
//			}
//		}
//		if (count == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,3,1,7,4,6,5,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//原始局限性冒泡排序（仅可以排列整型数组）
//	//bubble_sort(arr, sz);
//	//改进后的冒泡排序（仿qsort)
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}



//int main()
//{
//	int k = 0;
//	scanf_s("%d\n", &k);
//	char arr[100] = { 0 };
//	gets(arr);
//	char* p = &arr[k];
//	int a = strlen(arr);
//	for (p = &arr[k]; p <= &arr[a]; p++)
//		printf("%c", *p);
//	for (p = arr; p <= &arr[k - 1]; p++)
//		printf("%c", *p);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
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
//
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	char* p = arr;
//	int r = mystrlen(arr, p);
//	printf("%d", r);
//	return 0;
//}


//void Movenum(int a[], int sz)
//{
//	int* left = a;
//	int* right = a + sz - 1;
//	while (left < right)
//	{
//		while (((left < right) && (*left) % 2 != 0))
//		{
//			left++;
//		}
//		while (((left < right) && (*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i = 0;
//	int sz = (sizeof(a) / sizeof(a[0]));
//	Movenum(a, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}



#include <stdio.h>
#include <string.h>

// 1. 定义结构体
struct Student {
    char name[50];
    int age;
    char gender;
    float grade;
};

// 2. 定义共用体
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

// 3. 定义枚举类型
enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    // 使用结构体
    struct Student student1;
    strcpy(student1.name, "Alice");
    student1.age = 20;
    student1.gender = 'F';
    student1.grade = 88.5;

    printf("Student Info:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Gender: %c\n", student1.gender);
    printf("Grade: %.2f\n", student1.grade);

    // 使用共用体
    union Data data;
    data.intValue = 10;
    printf("\nUnion Data:\n");
    printf("Int Value: %d\n", data.intValue);
    data.floatValue = 3.14;
    printf("Float Value: %.2f\n", data.floatValue);
    data.charValue = 'A';
    printf("Char Value: %c\n", data.charValue);

    // 使用枚举类型
    enum Color color;
    color = GREEN;
    printf("\nEnum Color:\n");
    printf("Color: %d\n", color);

    return 0;
}


