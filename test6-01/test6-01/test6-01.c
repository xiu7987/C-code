#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//练习失败代码，需要用到单调栈这里
//int main()
//{
//    int cmp(const void* a, const void* b)
//    {
//        return (*(int*)a - *(int*)b);
//    }
//    int maxSumMinProduct(int* nums, int numsSize)
//    {
//        int n = numsSize;
//        qsort(nums, n, sizeof(int), cmp);
//        int v = 0;
//        for (int i = n - 1; i > 0; i--)
//            v += i;
//        int arr[v];
//        for (int i = 0; i < v; i++)
//            arr[i] = 0;
//        int i = 0;
//        while (n--)
//        {
//            int q = numsSize - n;
//            int p = n;
//            while (q--)
//            {
//                for (int z = q; z <= p; z++)
//                {
//                    arr[i] += nums[z];
//                }
//                arr[i] *= nums[q];
//                i++;
//                p--;
//            }
//        }
//        qsort(arr, v, sizeof(int), cmp);
//        return arr[v - 1] % 1000000007;
//    }
//	return 0;
//}


//AC代码
//int subsetXORSum(int* nums, int numsSize) {
//    int ans = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        ans |= nums[i];
//    }
//    return ans << (numsSize - 1);
//}
