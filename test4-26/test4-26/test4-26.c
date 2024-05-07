//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 21;
//	int m = 0;
//	switch (a % 3)
//	{
//	case 0:m++; break;
//	case 1:m++;
//	}
//	switch (b % 2)
//	{
//	default:m++;
//	case 0:m++; break;
//	}
//	printf("%d\n", m);
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//void print(char arr[], int a, char* p)
//{
//    for (int i = a; i >= 0; i--)
//    {
//        printf("%c", *p);
//        p--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int a = strlen(arr);
//    char* p = &arr[a];
//    print(arr, a, p);
//    return 0;
//}
//int main()
//{
//	int k = 0;
//	int i = 0;
//	int j = 0;
//	scanf_s("%d\n", &k);
//	char arr[100] = { 0 };
//	gets(arr);
//	int a = strlen(arr);
//	for (i = k; i < a; i++)
//		printf("%c", arr[i]);
//	for (j = 0;j<k;j++)
//		printf("%c",arr[j]);
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
//	for (p=&arr[k];p <= &arr[a];p++)
//		printf("%c", *p);
//	for (p=arr;p <= &arr[k-1]; p++)
//		printf("%c",*p);
//	return 0;
//}
size_t my_strlen(char arr[],char* p)
{

}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	char* p = arr;
	size_t a = my_strlen(arr,p);
	printf("%zd", a);
	return 0;
}