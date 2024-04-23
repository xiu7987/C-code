#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归方式计算斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else 
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int r = Fib(n);
//		printf("%d ", r);
//	}
//	return 0;
//}
////非递归方式计算斐波那契数列
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n = 0;
//	scanf_s("%d", &n);
//		while (n > 2)
//		{
//			if (n <= 2)
//			{
//				c = 1;
//				break;
//			}
//			else
//			{
//				c = a + b;
//				a = b;
//				b = c;
//				n--;
//			}
//		}
//		printf("%d", c);
//	return 0;
//}
// 计算一个数的n次方（递归方式）
//int pex(int n, int m)
//{
//	if (m == 0)
//		return 1;
//	else return n * pex(n, m - 1);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);
//	int r = pex(n, m);
//	printf("%d", r);
//	return 0;
//}
////计算一个数的每位之和
//int sum(int n)
//{
//	if (n < 9)
//		return n % 10;
//	else return n % 10 + sum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = sum(n);
//	printf("%d", r);
//	return 0;
//}
//递归解决n的阶乘（不考虑栈溢出）
//int factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	else return n * factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = factorial(n);
//	printf("%d", r);
//	return 0;
//}
//非递归方式解决n的阶乘
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int sum = n;
//	for (i = n - 1; i > 0; i--)
//		sum *= i;
//	printf("%d", sum);
//	return 0;
//}
//递归方式实现打印数字的每一位
void print(int n)
{
	if (n > 9)
		print(n/10);
	printf("%d ",n%10);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	print(n);
	return 0;
}