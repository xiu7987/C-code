#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int i;
//	for(i=1;i<=10;i++)
//	{
//		{
//		int sum;
//		int a=1;
//		for (sum=1;sum<=i;sum++)
//		a=sum*a;
//		printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n=0,i,b,a;
//	scanf("%d", &n);
//	for (i=1;i<=2*n; i++,i++)
//	{
//		for (a=1;a<=n-i;a++)
//			printf(" ");
//		{
//			for (b = 1; b <= i; b++)
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = { 'b', 'i', 't' };
    printf("%d\n", strlen(arr));
    return 0;
}