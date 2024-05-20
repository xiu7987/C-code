#define _CRT_SECURE_NO_WARNINGS 1
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
//模拟实现strstr函数
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* cur = (char*)arr1;
//	char* s1 = (char*)arr1;
//	if (!*arr2)
//		return (char*)arr1;
//	while (*cur)
//	{
//		s1 = cur;
//		char* s2 = (char*)arr2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcccddert";
//	char arr2[] = "ccd";
//	const char* p = my_strstr(arr1, arr2);
//	printf("%s\n", p);
//	return 0;
//}


//模拟实现strncpy函数
//char* my_strncpy(char* p1, const char* p, size_t n)
//
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
//
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

//模拟实现strncat函数
//char* my_strncat(char* arr1, const char* arr2, size_t n)
//{
//	assert(arr1 && arr2);
//	char* ret = arr1;
//	char* p = (char*)arr2;
//	while (*arr1 != '\0')
//		arr1++;
//	while (n-- && *arr2)
//	{
//		*arr1++ = *p++;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "sadad\0dsawq";
//	char arr2[] = "bash";
//	size_t n = 0;
//	scanf("%zd", &n);
//	char* p = my_strncat(arr1, arr2, n);
//	printf("%s\n", p);
//	return 0;
//}

//模拟实现memcpy函数
//void* my_memcpy(void* arr2, const void* arr1, size_t n)
//{
//	assert(arr2 && arr1);
//	void* ret = arr2;
//	for (int i = 0; i < n; i++)
//	{
//		*((char*)arr2) = *((char*)arr1);
//		arr2 = (char*)arr2 + 1;
//		arr1 = (char*)arr1 + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,2,6,4,8,3,1,7 };
//	int arr2[] = { 3,2,6,9,1,4 };
//	size_t n = 0;
//	scanf("%zd", &n);
//	int* p = my_memcpy(arr2, arr1, n);
//	int i = 0;
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//模拟实现memmove函数
//void* my_memmove(void* arr1, const void* arr2, size_t n)
//{
//	assert(arr1 && arr2);
//	void* ret = arr1;
//	if (arr1 > arr2) 
//	{
//		while (n--)
//		{
//			*((char*)arr1 + n) = *((char*)arr2 + n);
//		}
//	}
//	else
//	{
//		while (n--)
//		{
//			*((char*)arr1) = *((char*)arr2);
//			arr1 = (char*)arr1 + 1;
//			arr2 = (char*)arr2 + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,2,6,4,8,3,1,7 };
//	size_t n = 0;
//	scanf("%zd", &n);
//	int* p = my_memmove(arr1+2, arr1, n);
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}