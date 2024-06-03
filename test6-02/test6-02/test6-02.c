#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	FILE* fp1 = fopen("test1.txt", "w");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 1;
	}
	int c = 0;
	while (c != EOF)
	{
		c = fgetc(fp);
		fputc(c, fp1);
	}
	fclose(fp1);
	fp1 = NULL;
	fclose(fp);
	fp = NULL;
	return 0;
}



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//给小孩分糖果
//int* distributeCandies(int candies, int num_people, int* returnSize)
//{
//	int* fp = (int*)malloc(num_people * sizeof(int));
//	for (int i = 0; i < num_people; i++)
//	{
//		fp[i] = 0;
//	}
//	int n = 0;
//	while (n < candies)
//	{
//		fp[n % num_people] += (n + 1);
//		n++;
//		candies -= n;
//	}
//	fp[n % num_people] += candies;
//	*returnSize = num_people;
//	return fp;
//}


//给小孩分钱
//int distMoney(int money, int children) {
//	;
//	if (money < children) { return -1; }
//	money -= children;
//	int n = money / 7;
//	int remaining = money % 7;
//	if (n > children) { return children - 1; }
//	if (n == children && remaining > 0) { return children - 1; }
//	if (remaining == 3 && children - n == 1) { return n - 1; }
//	return n;
//}