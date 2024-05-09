#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//void menu()
//{
//	printf("***1,加法     2，减法***\n");
//	printf("***3,乘法     4，除法***\n");
//	printf("***      0，退出     ***\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int subtract(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}	
//int main()
//{
//	int (*cal[5])(int x,int y) = {0,add,subtract,mul,div};
//	menu();
//	int input = 1;
//	while (input) 
//	{
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			int ret = (*cal[input])(x, y);
//			printf("%d\n\n", ret);
//		}
//		else if(input<0 || input >4)
//		{
//			printf("输入有误，请重新输入\n");
//		}
//	}
//	printf("退出计算器\n");
//	return 0;
//}
//#include <stdio.h>
//int year_yn(int a)
//{
//    if (a % 4 == 0 && a % 100 != 0)
//        return 1;
//    else if (a % 400 == 0)
//        return 1;
//    else return 2;
//}
//int month(int ret, int b)
//{
//    if (b >= 8)
//    {
//        return 31 - b % 2;
//    }
//    else
//    {
//        if (b == 2)
//            return 30 - ret;
//    }
//    return 30 + b % 2;
//}
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        int ret = year_yn(a);
//        int day = month(ret, b);
//        printf("%d\n", day);
//    }
//    return 0;
//}
int bubble_sort(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void find_two_numbers(int arr[], int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < sz - 1; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			printf("%d ", arr[i]);
			count++;
		}
		else
		{
			i++;
		}
		if ((i + 1) == (sz - 1))
		{
			printf("%d\n", arr[i + 1]);
			break;
		}
		if (count == 2)
			break;
	}
}
int main()
{
	int arr[12] = { 1,3,4,3,1,2,7,4,7,6,6,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), bubble_sort);
	find_two_numbers(arr,sz);
	return 0;
}