#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 3 * 5);
//	int j = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int r = 0; r < 5; r++)
//		{
//			(p+i*5)[r] = j++;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int r = 0; r < 5; r++)
//		{
//			printf("%d ", (p+i*5)[r]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//union un
//{
//	char a;
//	int i;
//}s;
//
//int main()
//{
//	s.i = 1;
//	if (s.a == 0)
//	{
//		printf("´ó¶Ë");
//	}
//	else printf("Ð¡¶Ë");
//	return 0;
//}

//int* getConcatenation(int* nums, int numsSize, int* returnSize)
//{
//    int* arr = (int*)malloc(sizeof(int) * (numsSize * 2));
//    memcpy(arr, nums, numsSize * sizeof(int));
//    memcpy(arr + numsSize, nums, numsSize * sizeof(int));
//    *returnSize = numsSize * 2;
//    return arr;
//}


//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	assert(p);
//	int* str = (int*)realloc(p,sizeof(int) * 20);
//	assert(str);
//	p = str;
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = (int*)malloc(sizeof(int)*10);
	assert(p);
	memset(p, 0, sizeof(int) * 10);
	for(int i = 0;i < 10;i++)
	printf("%d ", p[i]);
	free(p);
	p = NULL;
	return 0;
}