#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%zd\n", sizeof(*pointer));
//	return 0;
//}

//
//int main1()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        if (i == (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10))
//        {
//            printf("%d ", i);
//
//        }
//    }
//    return 0;
//}

//
//int main2()
//{
//    int n = 0, b = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    scanf("%d", &arr[i]);
//    scanf("%d", &b);
//    for (int t = 0; t < n; t++)
//    {
//        if (arr[t] != b)
//        {
//           printf("%d ", arr[t]);
//        }
//    }
//    return 0;
//}



//struct stu1
//{
//    char a;
//    int b;
//    char c;
//}s1;
//
//struct stu2
//{
//    char a;
//    char c;
//    int b;
//}s2;
//int main()
//{
//    printf("%zd\n", sizeof(s1));
//    printf("%zd\n", sizeof(s2));
//    return 0;
//}

//#pragma pack(4)
//struct stu1
//{
//	double a;
//	int b;
//	char c;
//	char d;
//}s1;
//
//struct stu2
//{
//	char a;
//	struct stu1 s1;
//	char b;
//	int c;
//}s2;
//
//int main()
//{
//    printf("%zd\n", sizeof(s1));
//    printf("%zd\n", sizeof(s2));
//    return 0;
//}


//struct stu
//{
//	char a : 3;
//	char b : 4;
//	char c : 6;
//	char d : 8;
//}s1;
//
//int main()
//{
//	s1.a = 4;
//	s1.b = 6;
//	s1.c = 8;
//	s1.d = 12;
//	return 0;
//}


//struct s1
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	struct s1 sa = { 0 };
//	scanf("%d", &sa._b);//错误示例
//
//	//正确⽰例
//	int b = 0;
//	scanf("%d", &b);
//	sa._b = b;
//	return 0;
//}