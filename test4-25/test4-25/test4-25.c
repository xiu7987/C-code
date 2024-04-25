#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int find(int arr[])
//{
//	int i = 0;
//	int u = 0;
//	int count = 0;
//	for (i = 0; i < 9; i++)
//	{
//		count = 0;
//		for (u = 0; u < 9; u++)
//		{
//			if (arr[i] == arr[u])
//			{
//				count += 1;
//				if (count == 2)
//					break;
//			}
//		}
//		if (count == 1)
//			return arr[i];
//	}
//	return -1;
//}
//int main()
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	scanf_s ("%d", &arr[i]);
//	int r = find(arr);
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf_s("%d", &a);
//	while (a)
//	{
//		a &= (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	int r = 2;
//	int t = 1;
//	printf("偶数位\n");
//	for (i = 32; i > 0; i -= 2)
//	{
//		if ((a & r) != 0)
//			printf("1 ");
//		else printf("0 ");
//		r = r << 2;
//	 }
//	printf("\n");
//	printf("奇数位\n");
//	for (i = 32; i > 0; i -= 2)
//	{
//		if ((a & t) != 0)
//			printf("1 ");
//		else printf("0 ");
//		t = t << 2;
//	}
//	return 0;
//}
int main()
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    int r = a ^ b;
    int count = 0;
    while (r)
    {
        r = (r & (r - 1));
        count++;
    }
    printf("%d", count);
    return 0;
}