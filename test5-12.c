#define _CRT_SECURE_NO_WARNINGS 1
//判断矩阵是否为下三角矩阵
#include <stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int arr[a][a];
//        int i = 0;
//        int j = 0;
//        int count = 0;
//        int n = 0;
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < a; j++)
//                scanf("%d", &arr[i][j]);
//        }
//        for (i = 1; i < a; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                if (arr[i][j] == 0)
//                    count++;
//            }
//            n += i;
//        }
//        if (count == n)
//            printf("YES\n");
//        else printf("NO");
//    }
//    return 0;
//}
