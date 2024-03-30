#define _CRT_SECURE_NO_WARNINGS 0B
#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0, i, j, sum;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		sum = 1;
		for (j = 2; j <= i / 2; j++)
			if (i % j == 0)
				sum += j;
		if (sum == i)
		{
			printf("%d its factors are 1", i);
			for (j = 2; j <= i / 2; j++)
				if (i % j == 0)printf("%d,", j);
			printf("\n");
		}
	}
	return 0;
}