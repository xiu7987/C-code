#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum = n;
//	int a = 0;
//	do 
//	{
//		sum += n / 2;
//		if (n %2 == 1)
//		{
//			a += 1;
//			sum += a / 2;
//		}
//		n = n / 2;
//	} while (n);
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int b = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (b = 1; b <= (7 + i - 1); b++)
//		{
//			if (b<=7-i && 14-b>=7-i)
//			printf(" ");
//			else printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		for (b = 1; b <= 13-i; b++)
//		{
//			if (b <= i)
//			printf(" ");
//			else printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() 
//{
//    int num, digit, sum, temp;
//    printf("水仙花数：\n");
//    for (num = 0; num <= 100000; num++) 
//    {
//        temp = num;
//        sum = 0;
//        while (temp != 0) 
//       {
//            digit = temp % 10; 
//            sum += pow(digit, 3); 
//            temp /= 10; 
//        }
//        if (num == sum) {
//            printf("%d ", num);
//        }
//    }
//    printf("\n");
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int countdigits(int number) 
//{
//    int count = 0;
//    while (number != 0) 
//    {
//        number /= 10;
//        count++;
//    }
//    return count;
//}
//int isnarcissistic(int number) 
//{
//    int temp = number;
//    int numdigits = countdigits(number);
//    int sum = 0;
//    while (temp != 0) 
//    {
//        int digit = temp % 10;
//        sum += pow(digit, numdigits);
//        temp /= 10;
//    }
//
//    return sum == number;
//}
//int main() 
//{
//    printf("水仙花数：\n");
//    for (int i = 0; i <= 100000; i++)
//    {
//        if (isnarcissistic(i))
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int j = 0;
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 10000; i*=10)
	{
		j += n * i;
		sum += j;
	}
	printf("%d", sum);
	return 0;
}