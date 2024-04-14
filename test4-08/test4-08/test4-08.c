#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 9; i++)
	scanf("%d",&arr[i]);
	for (i = 0;i <= 8;i++)
	{
	if (arr[i] >= arr[i + 1])
		arr[i + 1] = arr[i];
	else if (arr[i] <= arr[i + 1] && arr[i] == arr[i+1])
		arr[i + 1] = arr[i + 1];
	}
	printf("%d", arr[9]);
	return 0;
}
//int main()
//{
//	char input[20] = { 0 };
//	char str1[20] = { "我是个傻13" };
//	do
//	{ 
//		system("shutdown -s -t 60");
//		printf("帅哥你的电脑要关机了，如果不想，那就输入我是个傻13\n");
//		scanf("%s", &input);
//	} while (strcmp(str1,input) != 0);
//	system("shutdown -a");
//	return 0;
//}