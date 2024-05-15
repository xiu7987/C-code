#include <stdio.h>
int main1()
{
	short a = 5;
	int b = 17;
	size_t n = sizeof(a = b + a);
	printf("%d %zd",a,n);
	return 0;
}
//size_t strlen(const char* str);



int main2()
{
	char arr1[3] = { 'a', 'b', 'c' };
	char arr2[] = "abc";
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	return 0;
}
int main3()
{
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof(a + 0));
	printf("%zd\n", sizeof(*a));
	printf("%zd\n", sizeof(a + 1));
	printf("%zd\n", sizeof(a[1]));
	printf("%zd\n", sizeof(&a));
	printf("%zd\n", sizeof(*&a));
	printf("%zd\n", sizeof(&a + 1));
	printf("%zd\n", sizeof(&a[0]));
	printf("%zd\n", sizeof(&a[0] + 1));
	return 0;
}

int main4()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", sizeof(arr));
	printf("%zd\n", sizeof(arr + 0));
	printf("%zd\n", sizeof(*arr));
	printf("%zd\n", sizeof(arr[1]));
	printf("%zd\n", sizeof(&arr));
	printf("%zd\n", sizeof(&arr + 1));
	printf("%zd\n", sizeof(&arr[0] + 1));
	return 0;
}


int main5()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", strlen(arr));
	printf("%zd\n", strlen(arr + 0));
	//printf("%zd\n", strlen(*arr));
	//printf("%zd\n", strlen(arr[1]));
	//printf("%zd\n", strlen(&arr));
	printf("%zd\n", strlen(&arr + 1));
	printf("%zd\n", strlen(&arr[0] + 1));
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	printf("%zd\n", strlen(arr));
	printf("%zd\n", strlen(arr + 0));
	printf("%zd\n", strlen(*arr));
	printf("%zd\n", strlen(arr[1]));
	printf("%zd\n", strlen(&arr));
	printf("%zd\n", strlen(&arr + 1));
	printf("%zd\n", strlen(&arr[0] + 1));
	return 0;
}

int main7()
{
	char arr[] = "abcdef";
	printf("%zd\n", sizeof(arr));
	printf("%zd\n", sizeof(arr + 0));
	printf("%zd\n", sizeof(*arr));
	printf("%zd\n", sizeof(arr[1]));
	printf("%zd\n", sizeof(&arr));
	printf("%zd\n", sizeof(&arr + 1));
	printf("%zd\n", sizeof(&arr[0] + 1));
	return 0;
}