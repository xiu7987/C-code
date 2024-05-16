#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
//for循环模仿实现strlen函数
//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	size_t count = 0;
//	for (; *p != '\0'; p++)
//		count++;
//	return count;
//}
//
//while循环模仿实现strlen函数
//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	size_t count = 0;
//	while (*p++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//无中间变量形式模仿实现strlen函数（递归）
//size_t my_strlen(const char* p)
//{
//	if (*p == '\0')
//		return 0;
//	else return 1 + my_strlen(p + 1);
//}
//
//int main()
//{
//	char p[] = "sdsadqdas";
//	size_t n = my_strlen(p);
//	printf("%zd\n", n);
//	return 0;
//}

//模拟实现strcpy函数
//char* my_strcpy(char* p1[], const char* p[])
//{
//	assert(p && p1);
//	char* begin = p;
//	for (*p1 = *p; *p != '\0'; p++, p1++);
//	*p1 = *p;
//	return begin;
//}
//int main()
//{
//	char p[] = "adsadasd";
//	char p1[20] = "waeq";
//	char* p2 = my_strcpy(p1, p);
//	printf("%s\n", p2);
//	return 0;
//}

//模拟实现strncpy函数
//char* my_strncpy(char* p1, const char* p, size_t n)
//{
//	assert(p && p1);
//	size_t count = 1;
//	char* begin = p1;
//	for (; count <= n; count++)
//	{
//		if (*p != '\0')
//		{
//			*p1++ = *p++;
//		}
//		else *p1++ = '\0';
//	}
//	return begin;
//}
//int main()
//{
//	char p[] = "adsadasd";
//	char p1[20] = "waeqsadasd";
//	size_t n = 0;
//	scanf("%zd", &n);
//	char* p2 = my_strncpy(p1, p, n);
//	printf("%s\n", p2);
//	return 0;
//}

//模拟实现strcmp函数
//int my_strcmp(const char* p, const char* p1)
//{
//	while (*p == *p1)
//	{
//		if (*p == '\0')
//			return 0;
//		p++;
//		p1++;
//	}
//	return (*p - *p1) / abs(*p - *p1);
//}
//int main()
//{
//	char p[] = "adsadasd";
//	char p1[20] = "adsadase";
//	int n = my_strcmp(p, p1);
//	printf("%d\n", n);
//	return 0;
//}

//模拟实现strncmp
//int my_strncmp(const char* p, const char* p1,size_t n)
//{
//	size_t count = 1;
//	while (*p == *p1 && count<=n)
//	{
//		if (*p == '\0' || count == n)
//			return 0;
//		p++;
//		p1++;
//		count++;
//	}
//	return (*p - *p1) / abs(*p - *p1);
//}
//int main()
//{
//	char p[] = "adsadasd";
//	char p1[20] = "adsvdaseaa";
//	size_t n = 0;
//	while ((scanf("%zd", &n)) != EOF) 
//	{
//		int q = my_strncmp(p, p1, n);
//		printf("%d\n", q);
//	}
//	return 0;
//}

//模拟实现strcat函数
//char* my_strcat(char* arr2, const char* arr1)
//{
//	assert(arr2 && arr1);
//	char* begin = arr2;
//	while (*arr2 != 0)
//		arr2++;
//	while (*arr1 != '\0')
//		*arr2++ = *arr1++;
//	*arr2 = *arr1;
//	return begin;
//}
//int main()
//{
//	char arr1[] = "adstdtdt";
//	char arr2[20] = "casa ";
//	char* arr = my_strcat(arr2, arr1);
//	printf("%s\n", arr);
//	return 0;
//}

//模拟实现strncat函数
int main()
{
	char arr1[] = "adstdtdt";
	char arr2[20] = "casa ";
	size_t n = 0;
	while ((scanf("%zd", &n)) != EOF) 
	{
		char* arr = my_strcat(arr2, arr1,n);
		printf("%s\n", arr);
	}
	return 0;
}