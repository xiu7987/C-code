#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ݹ鷽ʽ����쳲���������
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
////�ǵݹ鷽ʽ����쳲���������
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
// ����һ������n�η����ݹ鷽ʽ��
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
////����һ������ÿλ֮��
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
//�ݹ���n�Ľ׳ˣ�������ջ�����
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
//�ǵݹ鷽ʽ���n�Ľ׳�
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
//�ݹ鷽ʽʵ�ִ�ӡ���ֵ�ÿһλ
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