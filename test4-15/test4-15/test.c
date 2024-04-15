#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 0
int main() {
    int a = 0;
    while (scanf_s("%d", &a) != EOF)
    {
        int c, d;
        for (c = 0; c < a; c++)
        {
            for (d = 0; d < a; d++)
            {
                if (d == c)
                    printf("*");
                else if ((d + c) == (a - 1))
                    printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}