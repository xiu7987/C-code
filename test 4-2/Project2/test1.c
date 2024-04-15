#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int d = 0, e = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		d = a;
//		e = b;
//	}
//	else if (a < b)
//	{
//		d = b;
//		e = a;
//	}
//	if (c > d)
//	{
//		printf("%d %d %d", c, d, e);
//	}
//	else if (c < e)
//	{
//		printf("%d %d %d", d, e, c);
//	}
//	else printf("%d %d %d", d, c, e);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 100)
//		printf("ÄãÕæ´ÏÃ÷");
//		else printf("Äã¸öÉµ±Æ");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0,sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d",sum);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}