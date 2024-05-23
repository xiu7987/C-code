
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//my_sky_saa()
//{
//	int a = 1;
//	if (*((char*)&a) == 0)
//	{
//		printf("´ó¶Ë\n");
//	}
//	else printf("Ð¡¶Ë\n");
//}
//
//int main()
//{
//	my_sky_saa();
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" %d %d", a + b, c);
//	return 0;
//}



int my_atoi(const char* p)
{
	int sign = 1;
	int result = 0;
	if (p == NULL || *p == '\0')
	{
		return 0;
	}
	while (*p == ' ')
	{
		p++;
	}
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
		{
			sign = -1;
		}
		p++;
	}
	while (*p <= '9' && *p >= '0')
	{
		if (*p > '9' || *p < '0')
		{
			return 0;
		}
		else
		{
			result = result * 10 + (*p - '0');
			p++;
		}
	}
	return sign * result;
}
int main()
{
	char arr[20] = "123abc";
	int ret = my_atoi(arr);
	printf("%d", ret);
	return 0;
}
