#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double n = 0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			n = -i;
//		else n = i;
//		sum += 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i + 1 == 10 || i+1 == 100)
//			n += 1;
//		else if ((i + 1) / 10 % i == 0)
//			n += 1;
//		else continue;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int n = 1000;
//	for (n = 1001; n <= 2000; n++)
//	{
//		if (n % 4 == 0 && n % 100 != 0)
//		printf("%d\n", n);
//		else if (n % 400 == 0)
//		printf("%d\n", n);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	int d = 0;
//	int e = 0;
//	scanf("%d %d", &a, &b);
//	d = min(a, b);
//	for (n = 1; n <= d; n++)
//	{
//		if (a % n == 0 && b % n == 0)
//			e = n;
//	}
//	printf("%d", e);
//	return 0;
//}
//min(int a, int b)
//{
//	int z = 0;
//	if (a > b)
//		z = b;
//	else if (a < b)
//		z = a;
//	else z = a;
//	return z;
//}
void menu()
{
	printf("**�������������Ϸ**\n");
	printf("***�ܼ򵥵Ĳ�����***\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("********************\n");
	printf("*****2.������Ϸ*****\n");
	printf("********************\n\n");
}
void game()
{
	printf("��Ϸ��ʼ\n");
	printf("���°�\n\n");
	int a = rand() % 100 + 1;
	int b = 0;
	int z = 5;
		while (z)
		{
			for (z = 5; z > 0; z--)
			{
				printf("����%d�λ���\n", z);
				scanf("%d", &b);
				if (a > b)
				{
					printf("��С��\n");
				}
				else if (a < b)
				{
					printf("�´���\n");
				}
				else
				{
					printf("��ϲ��¶��ˣ������ҽ�����T_T��ô�����а���������\n");
					break;
				}
			}
		}
	printf("��Ǹ��ʧ����,������Ҫǿ�ƹػ���ĵ���\n");
	system("shutdown -s -t 60");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
			scanf("%d",&input);
			printf("\n");
		if (input == 1)
			game();
		else if (input == 0)
		printf("�˳���Ϸ\n");
		else printf ("ʶ���ˣ�������������������\n");
	} while (input);
	return 0;
}