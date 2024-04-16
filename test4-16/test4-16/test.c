#include <stdio.h>
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//        for (int l = 0; l < m; l++)
//            scanf("%d ", &arr[i][l]);
//    for (int q = 0; q < m; q++)
//    {
//        for (int v = 0; v < n; v++)
//        {
//            printf("%d ", arr[v][q]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf_s ("%d", &a);
//        arr[i] = a;
//    }
//    for (int n = 9; n >= 0; n--)
//        printf("%d ", arr[n]);
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int o = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr1[i]);
//    for (o = 0; o < m; o++)
//        scanf("%d", &arr2[o]);
//    int l = 0;
//    if (arr1[n - 1] < arr2[m - 1])
//    {
//        for (o = 0; o < m; o++)
//        {
//            for (i = l; i < n; i++)
//            {
//                if (arr2[o] >= arr1[i])
//
//                {
//                    printf("%d ", arr1[i]);
//                    l++;
//                }
//                else continue;
//            }
//            printf("%d ", arr2[o]);
//        }
//    }
//    if (arr1[n - 1] > arr2[m - 1])
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (o = l; o < m; o++)
//            {
//                if (arr1[i] >= arr2[o])
//                {
//                    printf("%d ", arr2[o]);
//                    l++;
//                }
//                else continue;
//            }
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//		scanf_s("%d", &arr1[i]);
//	for (i = 0; i < 10; i++)
//		sum += arr1[i];
//	double m = sum / 10.0;
//	printf("%lf", m);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0,t = 0;
//	for (i = 0; i <= 9; i++)
//		scanf_s(" %d", &arr1[i]);
//	for (i = 0; i <= 9; i++)
//		scanf_s(" %d", &arr2[i]);
//	for (i = 0; i <= 9; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	for (i = 0; i <= 9; i++)
//		printf("%d ", arr1[i]);
//	printf ("\n");
//		for (i = 0; i <= 9; i++)
//			printf ("%d ", arr2[i]);
//	return 0;
//}
int main()
{
	int n = 0,m = 0;
	int i = 0;
	int arr[1000] = { 0 };
	scanf_s ("%d", &n);//确定输入数据的个数
	for (i = 0; i < n; i++)
		scanf_s ("%d", &arr[i]);//为数组中的元素赋确定值,注意需按升序输入
	scanf_s ("%d", &m);//输入需要查找的值
	int left = 0;
	int right = n - 1;
	if (arr[left] >m || arr[right] < m)
		printf("-1");
	else
	while (left <= right)
	{
		int ave = (left + right) / 2;
		if (arr[ave] <= m)
			left = ave;
		else if (arr[ave] >= m)
			right = ave;
		if (arr[left] == m)
		{
			printf("找到了，对应元素的下标为%d", left);
			break;
		}
		else if (arr[right] == m)
		{
			printf("找到了，对应元素的下标为%d", right);
			break;
		}
		else continue;
	}
	if (left > right)
		printf("-1");
	else return 0;
}