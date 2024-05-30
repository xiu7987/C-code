#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	FILE* p = fopen("tes.txt", "wb");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int arr[2] = { 10000,1000 };
//	int* str = arr;
//	if (fread(str,2,4,p))
//	{
//		for (int i = 0; i < 2; i++)
//		printf("%d\n", arr[i]);
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* fp = fopen("text.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (char c = 'a';c <= 'z';c++)
//	{
//		fputc(c, fp);
//		printf("%c ", c);
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* fp = fopen("tex1.txt", "a");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char c = '0';
//	for (c = 'a';c <= 'z';c++)
//	{
//		fputc(c,fp);
//		printf("%c ", c);
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* fp = fopen("tex1.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char str[40];
//	char* p = fgets(str, 50, fp);
//	puts(str);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}



int main()
{
	FILE* fp = fopen("tex2.txt", "r+");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	int c = fputs("dsadsa", fp);
	fclose(fp);
	fp = NULL;
	return 0;
}