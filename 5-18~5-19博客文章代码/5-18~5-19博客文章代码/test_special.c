#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
//size_t my_strlen(const char* arr1)
//{
//	assert(arr1 != NULL);
//	if (*arr1 == '\0')
//		return 0;
//	else return 1 + my_strlen(++arr1);
//}
//int main()
//{
//	char arr1[] = "sdadawe";
//	size_t n = my_strlen(arr1);
//	printf("%zd\n", n);
//	return 0;
//}


//char* my_strcpy(char* arr2, const char* arr1)
//{
//	assert(arr2 && arr1);
//	char* ret = arr2;
//	while (*arr1 != '\0')
//		*arr2++ = *arr1++;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "dasdwqew";
//	char arr2[20] = { 0 };
//	char* p = my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//char* my_strncpy(char* arr2, const char* arr1, size_t n)
//{
//	assert(arr1 && arr2);
//	char* ret = arr2;
//	while (*arr1 != '\0' && n--)
//	*arr2++ = *arr1++;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "dasdwqew";
//	char arr2[20] = "fdsweqa";
//	size_t n = 0;
//	scanf("%zd", &n);
//	char* p = my_strncpy(arr2, arr1, n);
//	printf("%s\n", p);
//	return 0;
//}



//char* my_strcat(char* arr2, const char* arr1,size_t n)
//{
//	assert(arr2 && arr1);
//	char* ret = arr2;
//	while (*arr2)
//		arr2++;
//	while (*arr1 != '\0' && n--)
//		*arr2++ = *arr1++;
//	*arr2 = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "dasdwqew";
//	char arr2[20] = "fdsweqa";
//	size_t n = 0;
//	scanf("%zd", &n);
//	char* p = my_strcat(arr2, arr1,n);
//	printf("%s\n", p);
//	return 0;
//}


//int my_strncmp(const char* arr2, const char* arr1,size_t n)
//{
//	while (*arr2 == *arr1 && n--)
//	{
//		arr2++;
//		arr1++;
//	}
//	if (!(*arr2 - *arr1))
//		return 0;
//	return (*arr2 - *arr1) / abs(*arr2 - *arr1);
//}
//
//int main()
//{
//	char arr1[] = "dasdwqew";
//	char arr2[20] = "daedwqew";
//	size_t n = 0;
//	scanf("%zd", &n);
//	int p = my_strncmp(arr2, arr1,n);
//	printf("%d\n", p);
//	return 0;
//}


char* strstr(const char* str1, const char* str2);


int main()
{

	return 0;
}