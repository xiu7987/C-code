#include "SList.h"

void creat()
{
	PSLTNode node1 = (PSLTNode)malloc(sizeof(SLTNode));
	PSLTNode node2 = (PSLTNode)malloc(sizeof(SLTNode));
	PSLTNode node3 = (PSLTNode)malloc(sizeof(SLTNode));
	PSLTNode node4 = (PSLTNode)malloc(sizeof(SLTNode));
	node1->Data = 1;
	node1->next = node2;
	node2->Data = 2;
	node2->next = node3;
	node3->Data = 3;
	node3->next = node4;
	node4->Data = 4;
	node4->next = NULL;
	PSLTNode plist = node1;
	SLTprint(&plist);
}

void test01()
{
	PSLTNode plist = NULL;
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 1);
	SLTprint(&plist);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	SLTprint(&plist);
	SLTInsertAfter(SLTFind(plist,6),11);
	SLTErase(&plist, SLTFind(plist, 1));
	SLTEraseAfter(SLTFind(plist, 2));
	SLTprint(&plist);
	SListDestroy(&plist);
	SLTprint(&plist);

}

int main()
{
	//creat();
	test01();
	return 0;
}


//int cmp(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int a = 0;
//    for (int i = m; i < nums1Size; i++)
//    {
//        nums1[i] = nums2[a];
//        a++;
//    }
//    qsort(nums1, nums1Size, sizeof(int), cmp);
//}
//
//int main()
//{
//    int num1[6] = { 1,2,3,0,0,0 };
//    int num2[3] = { 2,5,6 };
//    merge(num1, 6, 3,num2, 3, 3);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", num1[i]);
//    }
//	return 0;
//}