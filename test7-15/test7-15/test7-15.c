#include "Seplist.h"

//顺序表的头插尾插以及头删尾删

void test()
{
	SL s;
	SepInit(&s);
	SLInsertEnd(&s,4);
	SLInsertEnd(&s,5);
	SLInsertEnd(&s,3);
	SLInsertEnd(&s,2);
	SLInsertEnd(&s,1);
	SLInsertBeg(&s, 1);
	SLInsertBeg(&s, 2);
	SLInsertBeg(&s, 3);
	SLInsertBeg(&s, 4);
	SLDeltBeg(&s);
	SLDeltEnd(&s);
	SLDeltDes(&s, 2);
	SLInsertDes(&s, 4, 2);
	SLPrintf(&s);
	SLDestory(&s);
}


int main()
{
	test();
	return 0;
}


//void swaplocation(int* nums, int sz, int sz1)
//{
//    int a = 0;
//    do
//    {
//        a = nums[sz];
//        nums[sz] = nums[sz1];
//        nums[sz1] = a;
//        sz++;
//        sz1--;
//    } while (sz != sz1);
//}
//void rotate(int* nums, int numsSize, int k) {
//    swaplocation(nums, 0, numsSize - k - 1);
//    swaplocation(nums, numsSize - k - 1, numsSize - 1);
//    swaplocation(nums, 0, numsSize - 1);
//}
//
//int main()
//{
//    int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int numsSize = sizeof(nums) / sizeof(int);
//    int k = 3;
//    rotate(nums, numsSize, k);
//	return 0;
//}数组反转